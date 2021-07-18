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

void INT_IRQ9(void) 
{
	unsigned char ucDelay = 0x3F;
	
	while (ucDelay--)
	{
		/* Switch De-bounce delay */
	}

	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ9F = 0;
}

void INT_IRQ1(void)
{
	unsigned char ucDelay = 0x3F;

	while (ucDelay--)
	{
		/* Switch De-bounce delay */
	}

	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ1F = 0;
}

void INT_IRQ2(void) 
{
	unsigned char ucDelay = 0x3F;

	while (ucDelay--)
	{
		/* Switch De-bounce delay */
	}

	/* Clear interrupt flag */
	INTC.ISR.BIT.IRQ2F = 0;
}

void ConfigureInterrupts(void)
{
	/* Configure IRQ Pin Select Register as follows
	   Select P81/IRQ1-B as SW1 interrupt source pin.
	   Select P82/IRQ2-B as SW2 interrupt source pin. */
	   
	INTC.ITSR.BIT.ITS1 = 0x1;
	INTC.ITSR.BIT.ITS2 = 0x1;
	
	/* Configure IRQ Sense Control Registers as falling edge of input for
	   IRQ9, IRQ1 and IRQ2 */
	   
	INTC.ISCRH.WORD = 0x0004;
	INTC.ISCRL.WORD = 0x0014;	
	
	/* Enable IRQ9, IRQ1, IRQ2 */
	INTC.IER.BIT.IRQ9E = 0x1;
	INTC.IER.BIT.IRQ1E = 0x1;
	INTC.IER.BIT.IRQ2E = 0x1;
	
	/* Clear flags IRQ9F, IRQ1F, IRQ2F */
	INTC.ISR.BIT.IRQ9F = 0;
	INTC.ISR.BIT.IRQ1F = 0;
	INTC.ISR.BIT.IRQ2F = 0;
	
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
 * \brief Specifies a named Interrupt Service Routine (ISR) to call when an interrupt occurs.
 *        Replaces any previous function that was attached to the interrupt.
 */
void attachInterrupt(uint32_t pin, interrupt_handle_t callback, interrupt_mode_t mode)
{
    
}

/*
 * \brief Turns off the given interrupt.
 */
void detachInterrupt(uint32_t pin)
{
    
}