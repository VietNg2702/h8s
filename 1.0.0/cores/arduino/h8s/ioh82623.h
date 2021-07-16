/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb.-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************/

#ifndef _IOH82623_INCLUDED
#define _IOH82623_INCLUDED
#include "macros.h"

/*
		H8S/2623 Special Function Registers
*/



/*		    System control
		    --------------
*/
#define MDCR       _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF3B))  /* Mode control  (read only) */
#define SYSCR      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE5))  /* System Control  */
#define PFCR       _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDEB))  /* Function Control  */

#define SBYCR      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE4))  /* Standby Control  */
#define SCKCR      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE6))  /* System clock Control  */

#define MSTPCR     _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF3C))  /* Module Stop Control */
#define MSTPCRA	   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE8))  /* DTC Module Stop Control */
#define MSTPCRB    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE9))  /* Module stop control B */
#define MSTPCRC    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDEA))  /* Modul Stop control C */


/*
                    H8S/2623  Interrupt Controller registers
		    ----------------------------------------
*/
#define ISCRH       _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE12))  /* IRQ sence control H  */
#define ISCRL       _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE13))  /* IRQ sence control L  */

#define IER         _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE14))   /* IRQ enable */
#define ISR         _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE15))   /* IRQ status */

#define IPRA        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC0))   /* Interrupt priority A */
#define IPRB        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC1))   /* Interrupt priority B */
#define IPRC        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC2))   /* Interrupt priority C */
#define IPRD        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC3))   /* Interrupt priority D */
#define IPRE        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC4))   /* Interrupt priority E */
#define IPRF        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC5))   /* Interrupt priority F */
#define IPRG        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC6))   /* Interrupt priority G */
#define IPRH        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC7))   /* Interrupt priority H */
#define IPRI        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC8))   /* Interrupt priority I */
#define IPRJ        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEC9))   /* Interrupt priority J */
#define IPRK        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFECA))   /* Interrupt priority K */
#define IPRM        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFECC))   /* Interrupt priority M */


/*
                    PC Break Controller (PBC)
		    -------------------------
*/
#define BARA        _DREF(_MPTR_(_VOL(_US(long)))(0xFFFFFE00))   /* Break Address A */
#define BARB        _DREF(_MPTR_(_VOL(_US(long)))(0xFFFFFE04))   /* Break Address B */
#define BCRA        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE08))   /* Break Control A */
#define BCRB        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE09))   /* Break Control B */



/*
		    Bus Controller (BSC)
		    -------------------
*/
#define ABWCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFED0))  /* Bus width control       */
#define ASTCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE1))  /* Access state control    */
#define WCRH	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFED2))  /* Wait control H          */
#define WCRL	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFED3))  /* Wait control L          */
#define BCRH	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFED4))  /* Bus control  H          */
#define BCRL	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFED5))  /* Bus control  L          */
#define PFCR        _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDEB))  /* Pin Function control    */


/*
		    Data Transfer Controller (DTC)
		    ------------------------------
*/
#define DTCERA	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF16))  /* DTC Enable register A   */
#define DTCERB	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF17))  /* DTC Enable register B   */
#define DTCERC	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF18))  /* DTC Enable register C   */
#define DTCERD	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF19))  /* DTC Enable register D   */
#define DTCERE	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF1A))  /* DTC Enable register E   */
#define DTCERF	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF1B))  /* DTC Enable register F   */
#define DTCERG 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE1C))  /* DTC Enable register G   */

#define DTCVECR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE1F))  /* DTC Vector */



/*
		    Some I/O ports....
		    --------------------
*/
#define P1DDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE30))  /* Port 1 data direction   */
#define P1DR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF00))  /* Port 1 data             */
#define PORT1	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFB0))  /* Port 1                  */

#define PORT4	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFB3))  /* Port 4                  */
#define PORT9	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFB8))  /* Port 9                  */

#define PADDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE39))  /* Port A data direction   */
#define PADR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF09))  /* Port A data             */
#define PORTA	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFB9))  /* Port A                  */
#define PAPCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE40))  /* Port A pull-up control  */
#define PAODR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE47))  /* Port A open-drain ctrl  */

#define PBDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE3A))  /* Port B data direction   */
#define PBDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF0A))  /* Port B data             */
#define PORTB	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFBA))  /* Port B                  */
#define PBPCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE41))  /* Port B pull-up control  */
#define PBODR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE48))  /* Port B open-drain ctrl  */

#define PCDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE3B))  /* Port C data direction   */
#define PCDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF0B))  /* Port C data             */
#define PORTC	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFBB))  /* Port C                  */
#define PCPCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE42))  /* Port C pull-up control  */
#define PCODR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE49))  /* Port C open-drain ctrl  */

#define PDDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE3C))  /* Port D data direction   */
#define PDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF0C))  /* Port D data             */
#define PORTD	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFBC))  /* Port D                  */
#define PDPCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE43))  /* Port D pull-up control  */

#define PEDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE3D))  /* Port E data direction   */
#define PEDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF0D))  /* Port E data             */
#define PORTE	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFBD))  /* Port E                  */
#define PEPCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE44))  /* Port E pull-up control  */

#define PFDDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE3E))  /* Port F data direction   */
#define PFDR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF0E))  /* Port F data             */
#define PORTF	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFBE))  /* Port F                  */



/*
		    16 Bit Timer Puls Unit (TPU)  (6 channels)
		    ------------------------------------------
*/
#define TPU_TCR0    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF10))  /* Timer control      ch 0 */
#define TPU_TMDR0   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF11))  /* Timer mode         ch 0 */
#define TPU_TIOR0H  _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF12))  /* Timer I/O ctrl H   ch 0 */
#define TPU_TIOR0L  _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF13))  /* Timer I/O ctrl L   ch 0 */
#define TPU_TIER0   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF14))  /* Timer intrpt enab  ch 0 */
#define TPU_TSR0    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF15))  /* Timer status       ch 0 */
#define TPU_TCNT0   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF16))  /* Timer counter      ch 0 */
#define TPU_TGR0A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF18))  /* Timer general A    ch 0 */
#define TPU_TGR0B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF1A))  /* Timer general B    ch 0 */
#define TPU_TGR0C   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF1C))  /* Timer general C    ch 0 */
#define TPU_TGR0D   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF1E))  /* Timer general D    ch 0 */

#define TPU_TCR1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF20))  /* Timer control      ch 1 */
#define TPU_TMDR1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF21))  /* Timer mode         ch 1 */
#define TPU_TIOR1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF22))  /* Timer I/O ctrl H   ch 1 */
#define TPU_TIER1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF24))  /* Timer intrpt enab  ch 1 */
#define TPU_TSR1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF25))  /* Timer status       ch 1 */
#define TPU_TCNT1   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF26))  /* Timer counter      ch 1 */
#define TPU_TGR1A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF28))  /* Timer general A    ch 1 */
#define TPU_TGR1B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF2A))  /* Timer general B    ch 1 */

#define TPU_TCR2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF30))  /* Timer control      ch 2 */
#define TPU_TMDR2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF31))  /* Timer mode         ch 2 */
#define TPU_TIOR2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF32))  /* Timer I/O ctrl H   ch 2 */
#define TPU_TIER2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF34))  /* Timer intrpt enab  ch 2 */
#define TPU_TSR2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF35))  /* Timer status       ch 2 */
#define TPU_TCNT2   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF36))  /* Timer counter      ch 2 */
#define TPU_TGR2A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF38))  /* Timer general A    ch 2 */
#define TPU_TGR2B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF3A))  /* Timer general B    ch 2 */

#define TPU_TCR3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE80))  /* Timer control      ch 3 */
#define TPU_TMDR3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE81))  /* Timer mode         ch 3 */
#define TPU_TIOR3H  _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE82))  /* Timer I/O ctrl H   ch 3 */
#define TPU_TIOR3L  _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE83))  /* Timer I/O ctrl L   ch 3 */
#define TPU_TIER3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE84))  /* Timer intrpt enab  ch 3 */
#define TPU_TSR3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE85))  /* Timer status       ch 3 */
#define TPU_TCNT3   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE86))  /* Timer counter      ch 3 */
#define TPU_TGR3A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE88))  /* Timer general A    ch 3 */
#define TPU_TGR3B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE8A))  /* Timer general B    ch 3 */
#define TPU_TGR3C   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE8C))  /* Timer general C    ch 3 */
#define TPU_TGR3D   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE8E))  /* Timer general D    ch 3 */

#define TPU_TCR4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE90))  /* Timer control      ch 4 */
#define TPU_TMDR4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE91))  /* Timer mode         ch 4 */
#define TPU_TIOR4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE92))  /* Timer I/O ctrl H   ch 4 */
#define TPU_TIER4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE94))  /* Timer intrpt enab  ch 4 */
#define TPU_TSR4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE95))  /* Timer status       ch 4 */
#define TPU_TCNT4   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE96))  /* Timer counter      ch 4 */
#define TPU_TGR4A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE98))  /* Timer general A    ch 4 */
#define TPU_TGR4B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFE9A))  /* Timer general B    ch 4 */

#define PTU_TCR5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEA0))  /* Timer control      ch 5 */
#define PTU_TMDR5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEA1))  /* Timer mode         ch 5 */
#define PTU_TIOR5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEA2))  /* Timer I/O ctrl H   ch 5 */
#define PTU_TIER5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEA4))  /* Timer intrpt enab  ch 5 */
#define PTU_TSR5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEA5))  /* Timer status       ch 5 */
#define PTU_TCNT5   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFEA6))  /* Timer counter      ch 5 */
#define PTU_TGR5A   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFEA8))  /* Timer general A    ch 5 */
#define PTU_TGR5B   _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFEAA))  /* Timer general B    ch 5 */

#define ITU_TSTR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEB0))  /* Timer start             */
#define ITU_TSYR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEB1))  /* Timer sync              */



/*		    Programmable Pulse Generator (PPG)
		    ----------------------------------
*/
#define PPG_PCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF26))  /* PPG output control      */
#define PPG_PMR	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF27))  /* PPG output mode         */
#define PPG_NDERH   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF28))  /* Next data enable H      */
#define PPG_NDERL   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF29))  /* Next data enable L      */
#define PPG_PODRH   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF2A))  /* Output data H           */
#define PPG_PODRL   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF2B))  /* Output data L           */

#define PPG_NDRH    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE2C))  /* Next data H             */
#define PPG_NDRH2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE2E))  /* Next data H group 2     */
#define PPG_NDRH3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE4C))  /* Next data H group 3     */
#define PPG_NDRL    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE2D))  /* Next data L             */
#define PPG_NDRL0   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE2F))  /* Next data L group 0     */
#define PPG_NDRL1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFE4D))  /* Next data L group 1     */

/*
		    Watchdog Timer (WDT)
		    --------------------
*/

/* Read to Watchdog timer registers */
#define WDT_R_TCSR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF74)) /* Timer control/status  */
#define WDT_R_TCNT    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF75)) /* Timer counter         */
#define WDT_R_RSTCSR  _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF76)) /* Reset control/status  */
/* Write to Watchdog timer registers */
#define WDT_W_TCSR    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF74)) /* Timer control/status  */
#define WDT_W_TCNT    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF74)) /* Timer counter         */
#define WDT_W_RSTCSR  _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFFF76)) /* Reset control/status  */


/*
		    Serial Communication Interface (SCI)
		    ------------------------------------
*/
#define SCI0_SMR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF78))  /* Serial mode        ch 0 */
#define SCI0_BRR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF79))  /* Bit rate           ch 0 */
#define SCI0_SCR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7a))  /* Serial control     ch 0 */
#define SCI0_TDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7b))  /* Transmit data      ch 0 */
#define SCI0_SSR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7c))  /* Serial status      ch 0 */
#define SCI0_RDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7d))  /* Receive data       ch 0 */
#define SCI0_SCMR   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7e))  /* Smart card mode    ch 0 */

#define SCI1_SMR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF80))  /* Serial mode        ch 1 */
#define SCI1_BRR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF81))  /* Bit rate           ch 1 */
#define SCI1_SCR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF82))  /* Serial control     ch 1 */
#define SCI1_TDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF83))  /* Transmit data      ch 1 */
#define SCI1_SSR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF84))  /* Serial status      ch 1 */
#define SCI1_RDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF85))  /* Receive data       ch 1 */
#define SCI1_SCMR   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF86))  /* Smart card mode    ch 1 */

#define SCI2_SMR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF88))  /* Serial mode        ch 2 */
#define SCI2_BRR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF89))  /* Bit rate           ch 2 */
#define SCI2_SCR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8a))  /* Serial control     ch 2 */
#define SCI2_TDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8b))  /* Transmit data      ch 2 */
#define SCI2_SSR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8c))  /* Serial status      ch 2 */
#define SCI2_RDR    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8d))  /* Receive data       ch 2 */
#define SCI2_SCMR   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8e))  /* Smart card mode    ch 2 */


/*
		    Smart Card Interface
		    --------------------
*/

#define SC_SMR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF78))  /* Serial mode        ch 0 */
#define SC_BRR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF79))  /* Bit rate           ch 0 */
#define SC_SCR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7a))  /* Serial control     ch 0 */
#define SC_TDR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7b))  /* Transmit data      ch 0 */
#define SC_SSR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7c))  /* Serial status      ch 0 */
#define SC_RDR0      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7d))  /* Receive data       ch 0 */
#define SC_SCMR0     _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF7e))  /* Smart card mode    ch 0 */

#define SC_SMR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF80))  /* Serial mode        ch 1 */
#define SC_BRR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF81))  /* Bit rate           ch 1 */
#define SC_SCR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF82))  /* Serial control     ch 1 */
#define SC_TDR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF83))  /* Transmit data      ch 1 */
#define SC_SSR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF84))  /* Serial status      ch 1 */
#define SC_RDR1      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF85))  /* Receive data       ch 1 */
#define SC_SCMR1     _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF86))  /* Smart card mode    ch 1 */

#define SC_SMR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF88))  /* Serial mode        ch 2 */
#define SC_BRR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF89))  /* Bit rate           ch 2 */
#define SC_SCR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8a))  /* Serial control     ch 2 */
#define SC_TDR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8b))  /* Transmit data      ch 2 */
#define SC_SSR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8c))  /* Serial status      ch 2 */
#define SC_RDR2      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8d))  /* Receive data       ch 2 */
#define SC_SCMR2     _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFF8e))  /* Smart card mode    ch 2 */



/*
		    Hitachi Controller Area Network (HCAN)
		    --------------------------------------
*/

#define CAN_MCR      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF800))  /* Master control */
#define CAN_GSR      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF801))  /* General status */
#define CAN_BCR      _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF802))  /* Bit configuration */
#define CAN_MBCR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF804))  /* Mailbox configuration  */
#define CAN_TXPR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF806))  /* Transmit wait  */
#define CAN_TXCR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF808))  /* Transmit wait cancel  */
#define CAN_TXACK    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF80A))  /* Transmit acknowledge  */
#define CAN_ABACK    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF80C))  /* Abort acknowledge  */
#define CAN_RXPR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF80E))  /* Receive complete  */
#define CAN_RFPR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF810))  /* Remote request wait  */
#define CAN_IRR      _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF812))  /* Interrupt  */
#define CAN_MBIMR    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF814))  /* Mailbox Interrupt req.  */
#define CAN_IMR      _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF816))  /* Interrupt mask  */
#define CAN_REC      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF818))  /* Receive error counter  */
#define CAN_TEC      _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF819))  /* Transmit error counter */
#define CAN_UMSR     _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF81A))  /* Unread message status  */
#define CAN_LAFML    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF81C))  /* Local acceptance filter L */
#define CAN_LAFMH    _DREF(_MPTR_(_VOL(_US(short)))(0xFFFFF81E))  /* Local acceptance filter H */



/* Mesage control 0 [1:8] */
#define CAN_MC0_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF820))
#define CAN_MC0_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF821))
#define CAN_MC0_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF822))
#define CAN_MC0_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF823))
#define CAN_MC0_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF824))
#define CAN_MC0_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF825))
#define CAN_MC0_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF826))
#define CAN_MC0_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF827))

/* Mesage control 1 [1:8] */
#define CAN_MC1_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF828))
#define CAN_MC1_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF829))
#define CAN_MC1_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82A))
#define CAN_MC1_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82B))
#define CAN_MC1_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82C))
#define CAN_MC1_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82D))
#define CAN_MC1_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82E))
#define CAN_MC1_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF82F))

/* Mesage control 2 [1:8] */
#define CAN_MC2_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF830))
#define CAN_MC2_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF831))
#define CAN_MC2_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF832))
#define CAN_MC2_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF833))
#define CAN_MC2_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF834))
#define CAN_MC2_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF835))
#define CAN_MC2_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF836))
#define CAN_MC2_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF837))

/* Mesage control 3 [1:8] */
#define CAN_MC3_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF838))
#define CAN_MC3_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF839))
#define CAN_MC3_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83A))
#define CAN_MC3_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83B))
#define CAN_MC3_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83C))
#define CAN_MC3_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83D))
#define CAN_MC3_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83E))
#define CAN_MC3_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF83F))

/* Mesage control 4 [1:8] */
#define CAN_MC4_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF840))
#define CAN_MC4_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF841))
#define CAN_MC4_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF842))
#define CAN_MC4_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF843))
#define CAN_MC4_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF844))
#define CAN_MC4_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF845))
#define CAN_MC4_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF846))
#define CAN_MC4_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF847))

/* Mesage control 5 [1:8] */
#define CAN_MC5_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF848))
#define CAN_MC5_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF849))
#define CAN_MC5_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84A))
#define CAN_MC5_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84B))
#define CAN_MC5_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84C))
#define CAN_MC5_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84D))
#define CAN_MC5_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84E))
#define CAN_MC5_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF84F))

/* Mesage control 6 [1:8] */
#define CAN_MC6_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF850))
#define CAN_MC6_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF851))
#define CAN_MC6_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF852))
#define CAN_MC6_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF853))
#define CAN_MC6_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF854))
#define CAN_MC6_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF855))
#define CAN_MC6_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF856))
#define CAN_MC6_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF857))

/* Mesage control 7 [1:8] */
#define CAN_MC7_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF858))
#define CAN_MC7_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF859))
#define CAN_MC7_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85A))
#define CAN_MC7_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85B))
#define CAN_MC7_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85C))
#define CAN_MC7_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85D))
#define CAN_MC7_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85E))
#define CAN_MC7_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF85F))

/* Mesage control 8 [1:8] */
#define CAN_MC8_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF860))
#define CAN_MC8_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF861))
#define CAN_MC8_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF862))
#define CAN_MC8_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF863))
#define CAN_MC8_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF864))
#define CAN_MC8_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF865))
#define CAN_MC8_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF866))
#define CAN_MC8_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF867))

/* Mesage control 9 [1:8] */
#define CAN_MC9_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF868))
#define CAN_MC9_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF869))
#define CAN_MC9_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86A))
#define CAN_MC9_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86B))
#define CAN_MC9_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86C))
#define CAN_MC9_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86D))
#define CAN_MC9_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86E))
#define CAN_MC9_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF86F))

/* Mesage control 10 [1:8] */
#define CAN_MC10_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF870))
#define CAN_MC10_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF871))
#define CAN_MC10_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF872))
#define CAN_MC10_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF873))
#define CAN_MC10_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF874))
#define CAN_MC10_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF875))
#define CAN_MC10_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF876))
#define CAN_MC10_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF877))

/* Mesage control 11 [1:8] */
#define CAN_MC11_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF878))
#define CAN_MC11_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF879))
#define CAN_MC11_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87A))
#define CAN_MC11_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87B))
#define CAN_MC11_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87C))
#define CAN_MC11_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87D))
#define CAN_MC11_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87E))
#define CAN_MC11_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF87F))

/* Mesage control 12 [1:8] */
#define CAN_MC12_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF880))
#define CAN_MC12_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF881))
#define CAN_MC12_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF882))
#define CAN_MC12_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF883))
#define CAN_MC12_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF884))
#define CAN_MC12_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF885))
#define CAN_MC12_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF886))
#define CAN_MC12_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF887))

/* Mesage control 13 [1:8] */
#define CAN_MC13_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF888))
#define CAN_MC13_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF889))
#define CAN_MC13_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88A))
#define CAN_MC13_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88B))
#define CAN_MC13_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88C))
#define CAN_MC13_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88D))
#define CAN_MC13_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88E))
#define CAN_MC13_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF88F))

/* Mesage control 14 [1:8] */
#define CAN_MC14_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF890))
#define CAN_MC14_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF891))
#define CAN_MC14_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF892))
#define CAN_MC14_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF893))
#define CAN_MC14_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF894))
#define CAN_MC14_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF895))
#define CAN_MC14_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF896))
#define CAN_MC14_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF897))

/* Mesage control 11 [1:8] */
#define CAN_MC15_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF898))
#define CAN_MC15_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF899))
#define CAN_MC15_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89A))
#define CAN_MC15_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89B))
#define CAN_MC15_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89C))
#define CAN_MC15_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89D))
#define CAN_MC15_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89E))
#define CAN_MC15_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF89F))


/* Mesage data 0 [1:8] */
#define CAN_MD0_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B0))
#define CAN_MD0_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B1))
#define CAN_MD0_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B2))
#define CAN_MD0_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B3))
#define CAN_MD0_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B4))
#define CAN_MD0_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B5))
#define CAN_MD0_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B6))
#define CAN_MD0_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B7))

/* Mesage data 1 [1:8] */
#define CAN_MD1_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B8))
#define CAN_MD1_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8B9))
#define CAN_MD1_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BA))
#define CAN_MD1_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BB))
#define CAN_MD1_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BC))
#define CAN_MD1_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BD))
#define CAN_MD1_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BE))
#define CAN_MD1_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8BF))

/* Mesage data 2 [1:8] */
#define CAN_MD2_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C0))
#define CAN_MD2_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C1))
#define CAN_MD2_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C2))
#define CAN_MD2_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C3))
#define CAN_MD2_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C4))
#define CAN_MD2_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C5))
#define CAN_MD2_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C6))
#define CAN_MD2_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C7))

/* Mesage data 3 [1:8] */
#define CAN_MD3_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C8))
#define CAN_MD3_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8C9))
#define CAN_MD3_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CA))
#define CAN_MD3_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CB))
#define CAN_MD3_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CC))
#define CAN_MD3_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CD))
#define CAN_MD3_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CE))
#define CAN_MD3_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8CF))

/* Mesage data 4 [1:8] */
#define CAN_MD4_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D0))
#define CAN_MD4_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D1))
#define CAN_MD4_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D2))
#define CAN_MD4_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D3))
#define CAN_MD4_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D4))
#define CAN_MD4_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D5))
#define CAN_MD4_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D6))
#define CAN_MD4_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D7))

/* Mesage data 5 [1:8] */
#define CAN_MD5_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D8))
#define CAN_MD5_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8D9))
#define CAN_MD5_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DA))
#define CAN_MD5_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DB))
#define CAN_MD5_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DC))
#define CAN_MD5_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DD))
#define CAN_MD5_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DE))
#define CAN_MD5_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8DF))

/* Mesage data 6 [1:8] */
#define CAN_MD6_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E0))
#define CAN_MD6_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E1))
#define CAN_MD6_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E2))
#define CAN_MD6_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E3))
#define CAN_MD6_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E4))
#define CAN_MD6_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E5))
#define CAN_MD6_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E6))
#define CAN_MD6_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E7))

/* Mesage data 7 [1:8] */
#define CAN_MD7_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E8))
#define CAN_MD7_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8E9))
#define CAN_MD7_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8EA))
#define CAN_MD7_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8EB))
#define CAN_MD7_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8EC))
#define CAN_MD7_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8ED))
#define CAN_MD7_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8EE))
#define CAN_MD7_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8EF))

/* Mesage data 8 [1:8] */
#define CAN_MD8_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F0))
#define CAN_MD8_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F1))
#define CAN_MD8_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F2))
#define CAN_MD8_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F3))
#define CAN_MD8_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F4))
#define CAN_MD8_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F5))
#define CAN_MD8_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F6))
#define CAN_MD8_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F7))

/* Mesage data 9 [1:8] */
#define CAN_MD9_1    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F8))
#define CAN_MD9_2    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8F9))
#define CAN_MD9_3    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FA))
#define CAN_MD9_4    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FB))
#define CAN_MD9_5    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FC))
#define CAN_MD9_6    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FD))
#define CAN_MD9_7    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FE))
#define CAN_MD9_8    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF8FF))

/* Mesage data 10 [1:8] */
#define CAN_MD10_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF900))
#define CAN_MD10_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF901))
#define CAN_MD10_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF902))
#define CAN_MD10_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF903))
#define CAN_MD10_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF904))
#define CAN_MD10_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF905))
#define CAN_MD10_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF906))
#define CAN_MD10_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF907))

/* Mesage data 11 [1:8] */
#define CAN_MD11_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF908))
#define CAN_MD11_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF909))
#define CAN_MD11_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90A))
#define CAN_MD11_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90B))
#define CAN_MD11_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90C))
#define CAN_MD11_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90D))
#define CAN_MD11_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90E))
#define CAN_MD11_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF90F))

/* Mesage data 12 [1:8] */
#define CAN_MD12_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF910))
#define CAN_MD12_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF911))
#define CAN_MD12_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF912))
#define CAN_MD12_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF913))
#define CAN_MD12_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF914))
#define CAN_MD12_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF915))
#define CAN_MD12_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF916))
#define CAN_MD12_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF917))

/* Mesage data 13 [1:8] */
#define CAN_MD13_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF918))
#define CAN_MD13_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF919))
#define CAN_MD13_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91A))
#define CAN_MD13_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91B))
#define CAN_MD13_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91C))
#define CAN_MD13_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91D))
#define CAN_MD13_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91E))
#define CAN_MD13_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF91F))

/* Mesage data 14 [1:8] */
#define CAN_MD14_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF920))
#define CAN_MD14_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF921))
#define CAN_MD14_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF922))
#define CAN_MD14_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF923))
#define CAN_MD14_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF924))
#define CAN_MD14_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF925))
#define CAN_MD14_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF926))
#define CAN_MD14_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF927))

/* Mesage data 11 [1:8] */
#define CAN_MD15_1   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF928))
#define CAN_MD15_2   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF929))
#define CAN_MD15_3   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92A))
#define CAN_MD15_4   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92B))
#define CAN_MD15_5   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92C))
#define CAN_MD15_6   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92D))
#define CAN_MD15_7   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92E))
#define CAN_MD15_8   _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFF92F))



/*		    A/D converter
		    -------------
*/
#define ADDRA	    _DREF(_MPTR_(_VOL(_US(short)))(0xffffff90))  /* Data register A           */
#define ADDRAH	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff90))  /* Data register A high byte */
#define ADDRAL	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff91))  /* Data register A low byte  */

#define ADDRB	    _DREF(_MPTR_(_VOL(_US(short)))(0xffffff92))  /* Data register B           */
#define ADDRBH	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff92))  /* Data register B high byte */
#define ADDRBL	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff93))  /* Data register B low byte  */

#define ADDRC	    _DREF(_MPTR_(_VOL(_US(short)))(0xffffff94))  /* Data register C           */
#define ADDRCH	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff94))  /* Data register C high byte */
#define ADDRCL	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff95))  /* Data register C low  byte */

#define ADDRD	    _DREF(_MPTR_(_VOL(_US(short)))(0xffffff96))  /* Data register D           */
#define ADDRDH	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff96))  /* Data register D high byte */
#define ADDRDL	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff97))  /* Data register D low byte  */

#define ADCSR	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff98))  /* Control/status          */
#define ADCR	    _DREF(_MPTR_(_VOL(_US(char)))(0xffffff99))  /* Control                 */


/*		    ROM
		    ---
*/
#define FLMCR1 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFA8))  /* Flash memory control 1  */
#define FLMCR2 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFA9))  /* Flash memory control 2  */
#define EBR1 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFAA))  /* Erase block 1  */
#define EBR2 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFAB))  /* Erase block 2  */
#define RAMER 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFEDB))  /* RAM emulation */
#define FLPWCR 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFFAC))  /* Flash power control */
#define SCRX 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDB4))  /* Serial control X */


/*
		    Clock Pulse Generator
		    ---------------------
*/
#define SCKCR 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDE6))  /* System clock control */
#define LPWRCR 	    _DREF(_MPTR_(_VOL(_US(char)))(0xFFFFFDEC))  /* Pow-power control */


/* GG */

/*
	H8S/2623  Interrupt Vectors
*/

/* Power-on reset */
#define RESET			0x0000

/* NOTE! Manual RESET not available in H8S/2623 */
/* #define MANUAL_RESET			0x0004 */

#define TRACE			0x0014
#define NMI			0x001C

/* Trap instructions */
#define TRAP0			0x0020
#define TRAP1			0x0024
#define TRAP2			0x0028
#define TRAP3			0x002C

/* External interrupts */
#define IRQ_0			0x0040
#define IRQ_1			0x0044
#define IRQ_2			0x0048
#define IRQ_3			0x004C
#define IRQ_4			0x0050
#define IRQ_5			0x0054

#define SWDTEND			0x0060

#define WDT_WOVI0		0x0064
#define PC_BREAK                0x006C

#define ADI			0x0070

#define TPU_TGI0A    		0x0080
#define TPU_TGI0B    		0x0084
#define TPU_TGI0C   		0x0088
#define TPU_TGI0D   		0x008C
#define TPU_TGI0V   		0x0090

#define TPU_TGI1A    		0x00A0
#define TPU_TGI1B    		0x00A4
#define TPU_TCI1V   		0x00A8
#define TPU_TCI1U   		0x00AC

#define TPU_TGI2A    		0x00B0
#define TPU_TGI2B    		0x00B4
#define TPU_TCI2V   		0x00B8
#define TPU_TCI2U   		0x00BC

#define TPU_TGI3A    		0x00C0
#define TPU_TGI3B    		0x00C4
#define TPU_TGI3C   		0x00C8
#define TPU_TGI3D   		0x00CC
#define TPU_TCI3V   		0x00D0

#define TPU_TGI4A    		0x00E0
#define TPU_TGI4B    		0x00E4
#define TPU_TCI4V   		0x00E8
#define TPU_TCI4U   		0x00EC

#define TPU_TGI5A    		0x00F0
#define TPU_TGI5B    		0x00F4
#define TPU_TCI5V   		0x00F8
#define TPU_TCI5U   		0x00FC

#define SCI_ERI0		0x0140
#define SCI_RXI0		0x0144
#define SCI_TXI0		0x0148
#define SCI_TEI0		0x014C

#define SCI_ERI1		0x0150
#define SCI_RXI1		0x0154
#define SCI_TXI1	        0x0158
#define SCI_TEI1		0x015C

#define SCI_ERI2		0x0160
#define SCI_RXI2		0x0164
#define SCI_TXI2		0x0168
#define SCI_TEI2		0x016C

#define HCAN_ERS0		0x01A0
#define HCAN_OVR0		0x01A4
#define HCAN_RM0		0x01A8
#define HCAN_RM1		0x01AC
#define HCAN_SLE0		0x01B0


#endif   /* _IOH82623_INCLUDED */


/* EOF */
