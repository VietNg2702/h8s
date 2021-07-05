/***********************************************************************************
FILE NAME  		dbsct.c
DESCRIPTION     Setting of B,R data sections for use by _INITSCT() function.
            
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
Compiler Directives
***********************************************************************************/
/* '#pragma section' instructs the linker to place all subsequent code in the named
section. This can be used to relocate code in the memory map. This directive should
be used when debugging code in RAM to provide a section name that can be referenced
in the build | toolchain | linker | section settings. Use of the directive without
the section name will reset the section to default. */

#pragma section $DSEC
static const struct {
	/* Start address of the initialized data section in ROM */
	unsigned char *rom_s;       
	/* End address of the initialized data section in ROM   */
	unsigned char *rom_e;       
	/* Start address of the initialized data section in RAM */
	unsigned char *ram_s;       
} DTBL[]= {
	{__sectop("D"), __secend("D"), __sectop("R")},
};

#pragma section $BSEC
static const struct {
	/* Start address of non-initialized data section */
	unsigned char *b_s;         
	/* End address of non-initialized data section */
	unsigned char *b_e;         
} BTBL[]= {
	{__sectop("B"), __secend("B")},
};
