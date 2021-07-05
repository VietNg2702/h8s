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

/*
 * \brief Specifies a named Interrupt Service Routine (ISR) to call when an interrupt occurs.
 *        Replaces any previous function that was attached to the interrupt.
 */
void attachInterrupt(uint32_t pin, interrupt_handle_t callback, interrupt_mode_t mode)
{
    /* Set the IRQ sense register	*/
	INTC.ISCR.WORD = 0x0051;

    /* Configure priority of IRQ1 and IRQ2 interrupts. */
	INTC.IPRB.BIT._IRQ23 = 0x01;

    /* Enable required IRQ1 and IRQ2 interrupt requests. */
	INTC.IER.BIT.IRQ2E = 1;

    /* Clear the interrupt flags	*/
	INTC.ISR.BYTE = SET_BYTE_LOW;

	/* Select interrupt control mode 2 to set the user defined interrupt priorities. */
	SYSCR.BIT.INTM = 2;
    
    /* Allow interrupts	 */
	set_imask_ccr((unsigned char)0);
	set_imask_exr((unsigned char)0);
}

/*
 * \brief Turns off the given interrupt.
 */
void detachInterrupt(uint32_t pin)
{
    
}