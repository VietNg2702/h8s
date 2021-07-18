/*-
 * Copyright (c) 2015 Marko Zec, University of Zagreb
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $Id$
 */

#include "Arduino.h"
#include "wiring.h"

/* Set to ensure base delay of 1mS minimum */
#define DELAY_TIMING	0x2F

static volatile uint64_t uSeconds = 0;


uint32_t millis()
{
	return uSeconds/1000;
}

uint32_t  micros(void)
{
	return uSeconds;
}

void delay(uint32_t dwMs)
{
	unsigned long counter = dwMs * DELAY_TIMING;

	/* Delay. */
	while(counter--)
	{
		nop();
	}
}
/*
* Outline 		: systick_config
* Description 	: Configures the timer as follows -
*					clock - PHI/16, counts up */

void systick_config(void)
{
	/* Stop the timer */
	TPU.TSTR.BIT.CST0 = 0x0;
	
	/* Timer Control Register, (TCR)
	b2:b1:b0 	- TPSC2:TPSC1:TPSC0 - 010 (Internal clock: counts on PHI/16) 
	b4:b3 		- CKEG1:CKEG0 	 	- 00  (Count at rising edge) 
	b7:b6:b5 	- CCLR2:CCLR1:CCLR0 - 001 (TCNT cleared by TGRA compare 
											match/input capture) */
	TPU0.TCR.BYTE = 0x23;
			
	/* Timer Mode Register (TMDR)
	b3:b2:b1:b0	- MD3:MD2:MD1:MD0	- 0000 (Normal operation)
	b4			- BFA				- 0    (TGRA operates normally)
	b5			- BFB				- 0	   (TGRB operates normally)
	b7:b6		- Reserved			- 11  */
	
	TPU0.TMDR.BYTE = 0xc0;
	
	/* Disable interrupts */
	set_ccr((unsigned char)1);

	/* Timer Interrupt Enable Register (TIER)
	b0		- TGIEA		- 1 (Interrupt requests (TGIA) by TGFA bit enabled)
	b1		- TGIEB		- 1 (Interrupt requests (TGIB) by TGFB bit enabled)
	b2		- TGIEC		- 0 (Interrupt requests (TGIC) by TGFC bit disabled)
	b3		- TGIED		- 0 (Interrupt requests (TGID) by TGFD bit disabled) 	 
	b4		- TCIEV		- 0 (Interrupt requests (TCIV) by TCFV disabled)
	b5		- TCIEU		- 0	(Interrupt requests (TCIV) by TCFV disabled)
	b6		- Reserved	- 1 
	b7		- TTGE		- 0 (A/D conversion start request generation disabled) */
	
	TPU0.TIER.BYTE = 0x43;
		
	/* Initialize the Timer General Register */
	TPU0.TGRA = 0x7FFF;
	TPU0.TGRB = 0x3FFF;
	   
	/* Enable interrupts */
	set_ccr((unsigned char)0);

	/* Start the timer */
	TPU.TSTR.BIT.CST0 = 1;
}
/******************************************************************************
End of function StartTimer
******************************************************************************/

void INT_TGI0B_TPU0(void) 
{
	
	/* Clear timer interrupt flag */
	TPU0.TSR.BIT.TGFB = 0;
}

void INT_TGI0A_TPU0(void) 
{
	uSeconds++;

	/* Set the interrupt for every 1 us */
	TPU0.TGRA = 2;

	/* Clear timer interrupt flag */
	TPU0.TSR.BIT.TGFA = 0;
}