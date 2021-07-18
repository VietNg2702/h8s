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

#ifndef _UART_CLASS_
#define _UART_CLASS_


#include "HardwareSerial.h"
#include "RingBuffer.h"

#define	BAUD_31250	23
#define	BAUD_19200	38
#define	BAUD_9600	  77
#define	BAUD_4800	  155

class UARTClass : public HardwareSerial
{
  public:
    UARTClass(uint8_t Tx_pin, uint8_t Rx_pin);
    void begin(unsigned long dwBaudRate);
    void end(void);
    int available(void);
    int availableForWrite(void);
    int peek(void);
    int read(void);
    void flush(void);
    size_t write(const char data);
    size_t write(const char * data);
    void irq_handler(uint8_t data);
    operator bool() {return (true);} // UART always active
  private:
		RingBuffer rxBuffer;
};

extern UARTClass Serial;
#endif // _UART_CLASS_
