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


#ifdef __cplusplus
extern "C" {
#endif

#include "iodefine.h"
#include "rsk2456rdef.h"
#include "inlines.h"

/***********************************************************************************
Function Name: 	INT_RXI1_SCI_1
Description:	SCI1 receive interrupt handler.
Parameters: 	none
Return value: 	none
***********************************************************************************/
void INT_RXI1_SCI_1(void)
{
	while(SCI1.SSR.BIT.RDRF == 0)
	{
		/* Make sure that the receive is complete */	
	}
	
	/* Read the received data */
	Serial.irq_handler(SCI1.RDR);

	/* Clear the RDRF flag */
	SCI1.SSR.BIT.RDRF = SET_BIT_LOW;
	
}/***********************************************************************************
End of function INT_RXI1_SCI_1
***********************************************************************************/



/***********************************************************************************
Function Name : uart_init
Description	  : SCI_1 initialization.
			  	UART Settings - 19200 baud, 8 data bits, 1 stop bit, no parity.
Parameters	  : none
Returns		  : none
***********************************************************************************/
void uart_init(unsigned long bauds) 
{
	unsigned char dummy;
	
	/* Disable transmission/reception */
	/* Clear the bits RIE, TIE,
	   TEIE, and MPIE, and bits TE and RE to 0 */

	SCI1.SCR.BYTE = 0x00;
	
	/* Set SCI1 bit rate generator, BRR value can be calculated as follows -	
		BRR value = ((((BRG count source * 2) / 64) / baud rate) - 1)
		Value of n depends on CKS1, CKS0 (transmit/receive mode register)
		Baud rate is based on main crystal / PLL */

	SCI1.BRR = (unsigned char)((((PERIPHERAL_CLK_SPEED * 2u) / 64u) / bauds) - 1u);	
	
	/* Serial Mode Register 
	  b1:b0	- CKS1:CKS0	 - 00 (PHI clock)
	  b2	- MP		 - 0 (Multiprocessor Mode disabled)
   	  b3	- STOP		 - 0 (1 stop bit)
   	  b4	- O/E		 - 0 (No parity used, not applicable)
   	  b5	- PE		 - 0 (No parity used)
   	  b6	- CHR		 - 0 (Selects 8 bits as the data length)
  	  b7	- C/A		 - 0 (Asynchronous mode) 	*/
	
	SCI1.SMR.BYTE = 0x00;	
	
	/* Interrupt control mode 0 selected. Interrupts are controlled by I bit. 
	   Default interrupt priorities will be used. For more detail, please refer 
	   to the section 'Interrupt Controller' in the hardware manual. */
	INTC.INTCR.BYTE = 0x00;	
	
	/* Enable interrupts	 */
	set_ccr((unsigned char)0);
	   
	/* Serial Control Register (SCR)  
	  b1:b0	- CKE1:CKE0  - 00 (On-chip baud rate generator
							   SCK pin functions as I/O port)
   	  b2 	- TEIE 	 	 - 0 (Transmit End Interrupt disabled)
  	  b3	- MPIE		 - 0 (Multiprocessor Mode disabled)
   	  b4	- RE		 - 1 (Receive Enabled)
   	  b5	- TE		 - 1 (Transmit Enabled)
   	  b6	- RIE		 - 1 (Receive Interrupt Enabled)
  	  b7	- TIE		 - 0 (Transmit Interrupt disabled) */

  	SCI1.SCR.BYTE = 0x70; 	

	/* dummy read	*/
	dummy = (unsigned char)SCI1.RDR;		
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
void text_write (const char * msg_string)
{
	/* Variable used to refer specific data while reading from the message buffer */
	char loopCnt;
	
	/* This loop reads a text string from the buffer and loads it to the SCI1
	   transmit buffer */
	for (loopCnt = 0; msg_string[loopCnt]; loopCnt++)
	{	 
		while (SCI1.SSR.BIT.TDRE != 1)
		{
			/* Wait till TDRE flag is set */
		}
		
		/* Output the character on the serial port. */ 
		SCI1.TDR = (unsigned char)msg_string[loopCnt];
		
		/* Reset the TDRE flag */
		SCI1.SSR.BIT.TDRE = SET_BIT_LOW;
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

size_t UARTClass::write(const char data)
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

