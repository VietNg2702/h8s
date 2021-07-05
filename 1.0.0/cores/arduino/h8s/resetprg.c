/***********************************************************************************
FILE NAME  		resetprg.c
DESCRIPTION		Reset Initialisation Function.
		The user's program will start in this file.

Copyright   : 2006 Renesas Technology Europe Ltd.
Copyright   : 2006 Renesas Technology Corporation.
All Rights Reserved
***********************************************************************************/

/***********************************************************************************
Revision History
DD.MM.YYYY OSO-UID Description
03.10.2006 RTE-VNA First Release.
***********************************************************************************/

/***********************************************************************************
System Includes
***********************************************************************************/
/* Following header file provides prototypes for interrupt configuring functions */
#include <_h_c_lib.h>
/* machine.h provides access to intrinsic functions to control interrupt levels. */
#include <machine.h>
/* stacksct.h is used by __entry directive to set the initial stack pointer. 
The value in this file should only be changed if relocating and / or changing the
size of the stack. */
#include "stacksct.h"

/***********************************************************************************
User Includes
***********************************************************************************/
/*	Following header file provides a structure to access on-chip I/O registers. */
#include "iodefine.h"

/***********************************************************************************
Function Prototypes
***********************************************************************************/
extern void main(void);
extern void HardwareSetup(void);

void PowerON_Reset(void);

/***********************************************************************************
Compiler Directives
***********************************************************************************/
/* '#pragma section' instructs the linker to place all subsequent code in the named
section. This can be used to relocate code in the memory map. This directive should
be used when debugging code in RAM to provide a section name that can be referenced
in the build | toolchain | linker | section settings. Use of the directive without
the section name will reset the section to default. */

/***********************************************************************************
ISR Name	: PowerON_Reset
Description	: Power on reset function. 
		This function executes following to power on reset.
		It first calls hardware initialisation function & then 'main()' function.
Parameters	: none
Return value: none
***********************************************************************************/
#pragma section ResetPRG

__entry(vect=0)
void PowerON_Reset(void)
{ 
	/* Renesas H8/SH Compiler Intrinsic function to copy initialised data to RAM */
	/* This function references the structure in the 'dbsct.c' source file */
	_INITSCT();

	/*	Setup the hardware.	*/
	HardwareSetup();				

	/*	Call user 'main()'.	*/
	main();

	/*	This function must never exit.	*/
	while(1);
}
/***********************************************************************************
End of function PowerON_Reset
***********************************************************************************/
