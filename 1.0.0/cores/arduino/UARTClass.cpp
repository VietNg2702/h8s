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
#include "ioh82623.h"
#include "sci_uart.h"

#ifdef __cplusplus
}
#endif


// Public Methods //////////////////////////////////////////////////////////////

UARTClass::UARTClass(void)
{

}

void UARTClass::begin(unsigned long bauds)
{
    InitUART( CSR_9600, P_NONE, 1, 8);              /* Set up the UART */
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

size_t UARTClass::write(char data)
{
    PutChar(data);
    return 1;
}

size_t UARTClass::write(char * data)
{
	size_t writed = 0;
	while(*data != '\0')
	{
		writed += UARTClass::write(*data);
		++data;
	}
	
	return writed;
}

void UARTClass::rx_event(void)
{
	if(UART_SR & SR_RXRDY)
	{
		rxBuffer.store_char(UART_RHR);
	} 

	/*--- Clear the RXRDY flag in SSR ---*/
    /*--- This is done automatically! ---*/
    UART_SR &= ~ SR_RXRDY;
}

