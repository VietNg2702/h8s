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

#include "Arduino.h"


/* Measures the length (in microseconds) of a pulse on the pin; state is HIGH
 * or LOW, the type of pulse to measure.  Works on pulses from 2-3 microseconds
 * to 3 minutes in length, but must be called at least a few dozen microseconds
 * before the start of the pulse. */
extern uint32_t pulseIn(char PORT, uint32_t pin, bool state, uint32_t timeout)
{
	uint32_t numloops = 0;
	uint32_t maxloops = microsecondsToClockCycles(timeout) / 16;
	uint32_t start, end;
	
	// wait for any previous pulse to end
	while (digitalRead(PORT, pin) == state)
		if (numloops++ == maxloops)
			return 0;
	
	// wait for the pulse to start
	while (digitalRead(PORT, pin) != state)
		if (numloops++ == maxloops)
			return 0;
	
	// wait for the pulse to stop
	start = micros();
	while (digitalRead(PORT, pin) == state)
		if (numloops++ == maxloops)
			return 0;
	end  = micros();

	return (end - start);
}
