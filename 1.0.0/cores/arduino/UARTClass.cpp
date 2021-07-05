/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "UARTClass.h"
#include "iodefine.h"
#include "rsk2215rdef.h"
#include <machine.h>

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************************
Function Name: 	INT_RXI0_SCI0
Description:	SCI0 receive interrupt handler.
Parameters: 	none
Return value: 	none
***********************************************************************************/
__interrupt(vect=81) void INT_RXI0_SCI0(void)
{
	if(SCI0.SSR.BIT.RDRF == 1)
	{
        Serial.irq_handler(SCI0.RDR);
	}
}
/***********************************************************************************
End of function INT_RXI0_SCI0
***********************************************************************************/



/***********************************************************************************
Function Name : uart_init
Description	  : SCI_0 initialization.
			  	UART Settings - 19200 baud, 8 data bits, 1 stop bit, no parity.
Parameters	  : none
Returns		  : none
***********************************************************************************/
void uart_init(unsigned long bauds)
{
	unsigned char dummy;

	/*	Select internal baud rate generator.	*/
	SCI0.SCR.BYTE = 0;

	/*	SCI is configured for asynchronous communication, 8 bit data, 1 stop bit,
		no parity. cpu clock has been selected as a source clock for UART.	*/
	SCI0.SMR.BYTE = 0;

	/*	Set baud rate */
	SCI0.BRR = bauds;

	/*	Settling delay.	*/
	nop();
	nop();

	/* Clear all status flags.	*/
	SCI0.SSR.BYTE = 0x00;

	/* Select interrupt control mode 2 to set the user defined interrupt priorities. */
	SYSCR.BIT.INTM = 2;

	/*	Set interrupt priority od SCI_0 other than 0 in order to enbale interrupt. */
	INTC.IPRJ.BIT._SCI0 = 1;

	/* Recieve Interrupt Enable (RIE = 1 ) */
	/* Transmission/Reception Enable (TE = 1, RE = 1) */
	SCI0.SCR.BYTE = 0x70;

	/*	dummy read.	*/
	dummy = SCI0.RDR;

	set_imask_ccr((unsigned char)0);
	set_imask_exr((unsigned char)0);
}
/***********************************************************************************
End of function uart_init
***********************************************************************************/

/***********************************************************************************
Function Name : text_write
Description	  : This function sends a text string to the terminal program.
Parameters	  : msg_string -> the text string to output.
Return Value  : none
***********************************************************************************/
void text_write(const char * msg_string)
{
	char i;

	/* This loop reads in the text string and puts it in the UART transmit
	   buffer */
	for (i=0; msg_string[i]; i++)
	{
		while(SCI0.SSR.BIT.TDRE == 0)
		{
			/* Wait here until the character is transmitted completely */
		}
		SCI0.TDR = msg_string[i];

		/* set 0 to TDRE */
		SCI0.SSR.BIT.TDRE = 0;
	}
}
/***********************************************************************************
End of function text_write
*******************************************************************************/


#ifdef __cplusplus
}
#endif


// Public Methods //////////////////////////////////////////////////////////////

UARTClass::UARTClass(uint8_t Tx_pin, uint8_t Rx_pin)
{

}

void UARTClass::begin(unsigned long bauds)
{
    uart_init(bauds);
    return;
}


void UARTClass::end(void)
{
    return;
}


int UARTClass::available(void)
{   
    return rxBuffer.available();
}


int UARTClass::peek(void)
{
    return rxBuffer.peek();
}


int UARTClass::read(void)
{
    return rxBuffer.read_char();
}

void UARTClass::flush(void)
{
    rxBuffer.clear();
}

size_t UARTClass::write(const uint8_t data)
{
    text_write(&data);
    return 1;
}

size_t UARTClass::write(const char * data)
{
	size_t writed = 0;
	while(*data != '\0')
	{
		writed += UARTClass::write(*data);
		++data;
	}
	
	return writed;
}

void UARTClass::irq_handler(uint8_t data)
{
  rxBuffer.store_char(data);
}

