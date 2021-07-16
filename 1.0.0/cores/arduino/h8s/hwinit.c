/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************/

#include "ioh82623.h"

#define	AE0		0x01 /* Address enable 0 */
#define	AE1		0x02 /* Address enable 0 */
#define	AE2		0x04 /* Address enable 0 */
#define	AE3		0x08 /* Address enable 0 */


void hw_initialise (void)
{
	ABWCR = 0xFC ;
	WCRL = 0xFC ;
	BCRH = 0xD0 ;
	PFCR = 0x0F ;
	PCDDR = 0xFF ;

	/* Initialise bus access for the UART */
	PFCR = (AE3 | AE2 | AE1 | AE0);
	PCDDR = 0xFF;

}
