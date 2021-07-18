/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

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

#include "Arduino.h"
#include <string.h>
#include "wiring_digital.h"
#include "WInterrupts.h"

interrupt_handle_t int_hanler[15];

void INT_IRQ0(void) 
{
	int_hanler[0]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ0F = 0;
}

void INT_IRQ1(void) 
{
	int_hanler[1]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ1F = 0;
}

void INT_IRQ2(void) 
{
	int_hanler[2]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ2F = 0;
}

void INT_IRQ3(void) 
{
	int_hanler[3]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ3F = 0;
}

void INT_IRQ4(void) 
{
	int_hanler[4]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ4F = 0;
}

void INT_IRQ5(void) 
{
	int_hanler[5]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ5F = 0;
}

void INT_IRQ6(void) 
{
	int_hanler[6]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ6F = 0;
}

void INT_IRQ7(void) 
{
	int_hanler[7]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ7F = 0;
}

void INT_IRQ8(void) 
{
	int_hanler[8]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ8F = 0;
}

void INT_IRQ13(void) 
{
	int_hanler[13]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ13F = 0;
}

void INT_IRQ14(void) 
{
	int_hanler[14]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ14F = 0;
}

void INT_IRQ15(void) 
{
	int_hanler[15]();
	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ15F = 0;
}


/*
 * \brief Specifies a named Interrupt Service Routine (ISR) to call when an interrupt occurs.
 *        Replaces any previous function that was attached to the interrupt.
 */
void attachInterrupt(char PORT, uint32_t pin, interrupt_handle_t callback, interrupt_mode_t mode)
{
    switch (PORT)
	{
		case '5':
			if(pin == 0) //P50/IRQ0-A selected
			{
				INTC.ITSR.BIT.ITS0 = 0x0;
				INTC.ISCRL.BIT.IRQ0SC  = mode;
				INTC.IER.BIT.IRQ0E = 0x1;
				INTC.ISR.BIT.IRQ0F = 0;
				int_hanler[0] = callback;
			}
			else if(pin == 1) //P51/IRQ1-A selected
			{
				INTC.ITSR.BIT.ITS1 = 0x0;
				INTC.ISCRL.BIT.IRQ1SC  = mode;
				INTC.IER.BIT.IRQ1E = 0x1;
				INTC.ISR.BIT.IRQ1F = 0;
				int_hanler[1] = callback;
			}
			else if(pin == 2) //P52/IRQ2-A selected 
			{
				INTC.ITSR.BIT.ITS2 = 0x0;
				INTC.ISCRL.BIT.IRQ2SC  = mode;
				INTC.IER.BIT.IRQ2E = 0x1;
				INTC.ISR.BIT.IRQ2F = 0;
				int_hanler[2] = callback;
			}
			else if(pin == 3) //P53/IRQ3-A selected 
			{
				INTC.ITSR.BIT.ITS3 = 0x0;
				INTC.ISCRL.BIT.IRQ3SC  = mode;
				INTC.IER.BIT.IRQ3E = 0x1;
				INTC.ISR.BIT.IRQ3F = 0;
				int_hanler[3] = callback;
			}
			break;
		case '8':
			if(pin == 0) //P80/IRQ0-B selected
			{
				INTC.ITSR.BIT.ITS0 = 0x1;
				INTC.ISCRL.BIT.IRQ0SC  = mode;
				INTC.IER.BIT.IRQ0E = 0x1;
				INTC.ISR.BIT.IRQ0F = 0;
				int_hanler[0] = callback;
			}
			else if(pin == 1) //P81/IRQ1-B selected
			{
				INTC.ITSR.BIT.ITS1 = 0x1;
				INTC.ISCRL.BIT.IRQ1SC  = mode;
				INTC.IER.BIT.IRQ1E = 0x1;
				INTC.ISR.BIT.IRQ1F = 0;
				int_hanler[1] = callback;
			}
			else if(pin == 2) //P82/IRQ2-B selected
			{
				INTC.ITSR.BIT.ITS2 = 0x1;
				INTC.ISCRL.BIT.IRQ2SC  = mode;
				INTC.IER.BIT.IRQ2E = 0x1;
				INTC.ISR.BIT.IRQ2F = 0;
				int_hanler[2] = callback;
			}
			else if(pin == 3) //P83/IRQ3-B selected 
			{
				INTC.ITSR.BIT.ITS3 = 0x1;
				INTC.ISCRL.BIT.IRQ3SC  = mode;
				INTC.IER.BIT.IRQ3E = 0x1;
				INTC.ISR.BIT.IRQ3F = 0;
				int_hanler[3] = callback;
			}
			else if(pin == 4) //P84/IRQ4-B selected
			{
				INTC.ITSR.BIT.ITS4 = 0x1;
				INTC.ISCRL.BIT.IRQ4SC  = mode;
				INTC.IER.BIT.IRQ4E = 0x1;
				INTC.ISR.BIT.IRQ4F = 0;
				int_hanler[4] = callback;
			}
			else if(pin == 5) //P85/IRQ5-B selected
			{
				INTC.ITSR.BIT.ITS5 = 0x1;
				INTC.ISCRL.BIT.IRQ5SC  = mode;
				INTC.IER.BIT.IRQ5E = 0x1;
				INTC.ISR.BIT.IRQ5F = 0;
				int_hanler[5] = callback;
			}
			break;
		case '2':
			if(pin == 0) //P20/IRQ8-B selected
			{
				INTC.ITSR.BIT.ITS8 = 0x1;
				INTC.ISCRH.BIT.IRQ8SC  = mode;
				INTC.IER.BIT.IRQ8E = 0x1;
				INTC.ISR.BIT.IRQ8F = 0;
				int_hanler[8] = callback;
			}
			else if(pin == 5) //P25/IRQ13-B selected 
			{
				INTC.ITSR.BIT.ITS13 = 0x1;
				INTC.ISCRH.BIT.IRQ13SC  = mode;
				INTC.IER.BIT.IRQ13E = 0x1;
				INTC.ISR.BIT.IRQ13F = 0;
				int_hanler[13] = callback;
			}
			else if(pin == 6) //P26/IRQ14-B selected
			{
				INTC.ITSR.BIT.ITS14 = 0x1;
				INTC.ISCRH.BIT.IRQ14SC  = mode;
				INTC.IER.BIT.IRQ14E = 0x1;
				INTC.ISR.BIT.IRQ14F = 0;
				int_hanler[14] = callback;
			}
			else if(pin == 7)  //P27/IRQ15-B selected
			{
				INTC.ITSR.BIT.ITS15 = 0x1;
				INTC.ISCRH.BIT.IRQ15SC  = mode;
				INTC.IER.BIT.IRQ15E = 0x1;
				INTC.ISR.BIT.IRQ15F = 0;
				int_hanler[15] = callback;
			}
			break;
		case 'A':
			if(pin == 4) //PA4/IRQ4-A selected
			{
				INTC.ITSR.BIT.ITS4 = 0x0;
				INTC.ISCRL.BIT.IRQ4SC  = mode;
				INTC.IER.BIT.IRQ4E = 0x1;
				INTC.ISR.BIT.IRQ4F = 0;
				int_hanler[4] = callback;
			}
			else if(pin == 5) //PA5/IRQ5-A selected 
			{
				INTC.ITSR.BIT.ITS5 = 0x0;
				INTC.ISCRL.BIT.IRQ5SC  = mode;
				INTC.IER.BIT.IRQ5E = 0x1;
				INTC.ISR.BIT.IRQ5F = 0;
				int_hanler[5] = callback;
			}
			else if(pin == 6) //PA6/IRQ6-A selected 
			{
				INTC.ITSR.BIT.ITS6 = 0x0;
				INTC.ISCRL.BIT.IRQ6SC  = mode;
				INTC.IER.BIT.IRQ6E = 0x1;
				INTC.ISR.BIT.IRQ6F = 0;
				int_hanler[6] = callback;
			}
			else if(pin == 7) //PA7/IRQ7-A selected
			{
				INTC.ITSR.BIT.ITS7 = 0x0;
				INTC.ISCRL.BIT.IRQ7SC  = mode;
				INTC.IER.BIT.IRQ7E = 0x1;
				INTC.ISR.BIT.IRQ7F = 0;
				int_hanler[7] = callback;
			}
			break;
		case '6':
			if(pin == 0) //P60/IRQ8-A selected 
			{
				INTC.ITSR.BIT.ITS8 = 0x0;
				INTC.ISCRH.BIT.IRQ8SC  = mode;
				INTC.IER.BIT.IRQ8E = 0x1;
				INTC.ISR.BIT.IRQ8F = 0;
				int_hanler[8] = callback;
			}
			else if(pin == 5) //P65/IRQ13-A selected
			{
				INTC.ITSR.BIT.ITS13 = 0x0;
				INTC.ISCRH.BIT.IRQ13SC  = mode;
				INTC.IER.BIT.IRQ13E = 0x1;
				INTC.ISR.BIT.IRQ13F = 0;
				int_hanler[13] = callback;
			}
			break;
		case 'H':
			if(pin == 2) //PH2/IRQ6-B selected
			{
				INTC.ITSR.BIT.ITS6 = 0x1;
				INTC.ISCRL.BIT.IRQ6SC  = mode;
				INTC.IER.BIT.IRQ6E = 0x1;
				INTC.ISR.BIT.IRQ6F = 0;
				int_hanler[6] = callback;
			}
			else if(pin == 3) //PH3/IRQ7-B selected
			{
				INTC.ITSR.BIT.ITS7 = 0x1;
				INTC.ISCRL.BIT.IRQ7SC  = mode;
				INTC.IER.BIT.IRQ7E = 0x1;
				INTC.ISR.BIT.IRQ7F = 0;
				int_hanler[7] = callback;
			}
			break;
		case 'F':
			if(pin == 1) //PF1/IRQ14-A selected
			{
				INTC.ITSR.BIT.ITS14 = 0x0;
				INTC.ISCRH.BIT.IRQ14SC  = mode;
				INTC.IER.BIT.IRQ14E = 0x1;
				INTC.ISR.BIT.IRQ14F = 0;
				int_hanler[14] = callback;
			}
			else if(pin == 2) //PF2/IRQ15-A selected 
			{
				INTC.ITSR.BIT.ITS15 = 0x0;
				INTC.ISCRH.BIT.IRQ15SC  = mode;
				INTC.IER.BIT.IRQ15E = 0x1;
				INTC.ISR.BIT.IRQ15F = 0;
				int_hanler[15] = callback;
			}
			break;
		default:
			return;
			break;
	}

	/* Disable TPU interrupt */
	TPU0.TIER.BYTE = 0x00;

	/* Interrupt control mode 0 selected. Interrupts are controlled by I bit. 
	   Default interrupt priorities will be used. For more detail, please refer 
	   to the section 'Interrupt Controller' in the hardware manual. */
	INTC.INTCR.BYTE = 0x00;	
	
	/* Allow interrupts	 */
	set_ccr((unsigned char)0);
}

/*
 * \brief Turns off the given interrupt.
 */
void detachInterrupt(char PORT, uint32_t pin)
{
    switch (PORT)
	{
		case '5':
			if(pin == 0) //P50/IRQ0-A selected
			{
				INTC.IER.BIT.IRQ0E = 0x0;
			}
			else if(pin == 1) //P51/IRQ1-A selected
			{
				INTC.IER.BIT.IRQ1E = 0x0;
			}
			else if(pin == 2) //P52/IRQ2-A selected 
			{
				INTC.IER.BIT.IRQ2E = 0x0;
			}
			else if(pin == 3) //P53/IRQ3-A selected 
			{
				INTC.IER.BIT.IRQ3E = 0x0;
			}
			break;
		case '8':
			if(pin == 0) //P80/IRQ0-B selected
			{
				INTC.IER.BIT.IRQ0E = 0x0;
			}
			else if(pin == 1) //P81/IRQ1-B selected
			{
				INTC.IER.BIT.IRQ1E = 0x0;
			}
			else if(pin == 2) //P82/IRQ2-B selected
			{
				INTC.IER.BIT.IRQ2E = 0x0;
			}
			else if(pin == 3) //P83/IRQ3-B selected 
			{
				INTC.IER.BIT.IRQ3E = 0x1;
			}
			else if(pin == 4) //P84/IRQ4-B selected
			{
				INTC.IER.BIT.IRQ4E = 0x1;
			}
			else if(pin == 5) //P85/IRQ5-B selected
			{
				INTC.IER.BIT.IRQ5E = 0x0;
			}
			break;
		case '2':
			if(pin == 0) //P20/IRQ8-B selected
			{
				INTC.IER.BIT.IRQ8E = 0x0;
			}
			else if(pin == 5) //P25/IRQ13-B selected 
			{
				INTC.IER.BIT.IRQ13E = 0x0;
			}
			else if(pin == 6) //P26/IRQ14-B selected
			{
				INTC.IER.BIT.IRQ14E = 0x0;
			}
			else if(pin == 7)  //P27/IRQ15-B selected
			{
				INTC.IER.BIT.IRQ15E = 0x0;
			}
			break;
		case 'A':
			if(pin == 4) //PA4/IRQ4-A selected
			{
				INTC.IER.BIT.IRQ4E = 0x0;
			}
			else if(pin == 5) //PA5/IRQ5-A selected 
			{
				INTC.IER.BIT.IRQ5E = 0x0;
			}
			else if(pin == 6) //PA6/IRQ6-A selected 
			{
				INTC.IER.BIT.IRQ6E = 0x0;
			}
			else if(pin == 7) //PA7/IRQ7-A selected
			{
				INTC.IER.BIT.IRQ7E = 0x0;
			}
			break;
		case '6':
			if(pin == 0) //P60/IRQ8-A selected 
			{
				INTC.IER.BIT.IRQ8E = 0x0;
			}
			else if(pin == 5) //P65/IRQ13-A selected
			{
				INTC.IER.BIT.IRQ13E = 0x0;
			}
			break;
		case 'H':
			if(pin == 2) //PH2/IRQ6-B selected
			{
				INTC.IER.BIT.IRQ6E = 0x0;
			}
			else if(pin == 3) //PH3/IRQ7-B selected
			{
				INTC.IER.BIT.IRQ7E = 0x0;
			}
			break;
		case 'F':
			if(pin == 1) //PF1/IRQ14-A selected
			{
				INTC.IER.BIT.IRQ14E = 0x0;
			}
			else if(pin == 2) //PF2/IRQ15-A selected 
			{
				INTC.IER.BIT.IRQ15E = 0x0;
			}
			break;
		default:
			return;
			break;
	}
}