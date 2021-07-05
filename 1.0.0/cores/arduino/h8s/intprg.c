/***********************************************************************************
FILE NAME  		intprg.c
DESCRIPTION		Interrupt vector declarations for the H8S2215R CPU.

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
/* machine.h provides access to intrinsic functions to control interrupt levels. */
#include <machine.h>

/***********************************************************************************
Interrupt vector declarations
***********************************************************************************/

/***********************************************************************************
Compiler Directives
***********************************************************************************/
/* '#pragma section' instructs the linker to place all subsequent code in the named
section. This can be used to relocate code in the memory map. This directive should
be used when debugging code in RAM to provide a section name that can be referenced
in the build | toolchain | linker | section settings. Use of the directive without
the section name will reset the section to default */

#pragma section IntPRG

/*	Manual Reset Vector */
__interrupt(vect=1) void Manual_Reset(void) { /* sleep(); */ }

/* vector 2 Reserved */ 

/* vector 3 Reserved */ 

/* vector 4 Reserved */ 

/* vector 5 TRACE */
__interrupt(vect=5) void INT_TRACE(void) {/* sleep(); */}

/* vector 6 Direct Transition */
__interrupt(vect=6) void INT_Direct_Transition(void) {/* sleep(); */}

/* vector 7 NMI */
__interrupt(vect=7) void INT_NMI(void) {/* sleep(); */}

/* vector 8 trap #0 */
__interrupt(vect=8) void INT_TRAP0(void) {/* sleep(); */}

/* vector 9 trap #1 */
__interrupt(vect=9) void INT_TRAP1(void) {/* sleep(); */}

/* vector 10 trap #2 */
__interrupt(vect=10) void INT_TRAP2(void) {/* sleep(); */}

/* vector 11 trap #3 */
__interrupt(vect=11) void INT_TRAP3(void) {/* sleep(); */}

/* vector 12 Reserved */ 

/* vector 13 Reserved */ 

/* vector 14 Reserved */ 

/* vector 15 Reserved */ 

/* vector 16 External trap IRQ0 */
__interrupt(vect=16) void INT_IRQ0(void) {/* sleep(); */}

/* vector 17 External trap IRQ1 */
__interrupt(vect=17) void INT_IRQ1(void) {/* sleep(); */}

/* vector 18 External trap IRQ2 */
__interrupt(vect=18) void INT_IRQ2(void) {/* sleep(); */}

/* vector 19 External trap IRQ3 */
__interrupt(vect=19) void INT_IRQ3(void) {/* sleep(); */}

/* vector 20 External trap IRQ4 */
__interrupt(vect=20) void INT_IRQ4(void) {/* sleep(); */}

/* vector 21 External trap IRQ5 */
__interrupt(vect=21) void INT_IRQ5(void) {/* sleep(); */}

/* vector 22 USB / External trap IRQ6 */
__interrupt(vect=22) void INT_IRQ6(void) {/* sleep(); */}

/* vector 23 External trap IRQ7 */
__interrupt(vect=23) void INT_IRQ7(void) {/* sleep(); */}

/* vector 24 SWDTEND DTC */
__interrupt(vect=24) void INT_SWDTEND_DTC(void) {/* sleep(); */}

/* vector 25 WOVI */
__interrupt(vect=25) void INT_WOVI(void) {/* sleep(); */}

/* vector 26 Reserved */ 

/* vector 27 Reserved */ 

/* vector 28 ADI */
__interrupt(vect=28) void INT_ADI(void) {/* sleep(); */}

/* vector 29 Reserved */ 

/* vector 30 Reserved */ 

/* vector 31 Reserved */ 

/* vector 32 TGI0A TPU0 */
__interrupt(vect=32) void INT_TGI0A_TPU0(void) {/* sleep(); */}

/* vector 33 TGI0B TPU0 */
__interrupt(vect=33) void INT_TGI0B_TPU0(void) {/* sleep(); */}

/* vector 34 TGI0C TPU0 */
__interrupt(vect=34) void INT_TGI0C_TPU0(void) {/* sleep(); */}

/* vector 35 TGI0D TPU0 */
__interrupt(vect=35) void INT_TGI0D_TPU0(void) {/* sleep(); */}

/* vector 36 TCI0V TPU0 */
__interrupt(vect=36) void INT_TCI0V_TPU0(void) {/* sleep(); */}

/* vector 37 Reserved */ 

/* vector 38 Reserved */ 

/* vector 39 Reserved */ 

/* vector 40 TGI1A TPU1 */
__interrupt(vect=40) void INT_TGI1A_TPU1(void) {/* sleep(); */}

/* vector 41 TGI1B TPU1 */
__interrupt(vect=41) void INT_TGI1B_TPU1(void) {/* sleep(); */}

/* vector 42 TCI1V TPU1 */
__interrupt(vect=42) void INT_TCI1V_TPU1(void) {/* sleep(); */}

/* vector 43 TCI1U TPU1 */
__interrupt(vect=43) void INT_TCI1U_TPU1(void) {/* sleep(); */}

/* vector 44 TGI2A TPU2 */
__interrupt(vect=44) void INT_TGI2A_TPU2(void) {/* sleep(); */}

/* vector 45 TGI2B TPU2 */
__interrupt(vect=45) void INT_TGI2B_TPU2(void) {/* sleep(); */}

/* vector 46 TCI2V TPU2 */
__interrupt(vect=46) void INT_TCI2V_TPU2(void) {/* sleep(); */}

/* vector 47 TCI2U TPU2 */
__interrupt(vect=47) void INT_TCI2U_TPU2(void) {/* sleep(); */}

/* vector 48 Reserved */ 

/* vector 49 Reserved */ 

/* vector 50 Reserved */ 

/* vector 51 Reserved */ 

/* vector 52 Reserved */ 

/* vector 53 Reserved */ 

/* vector 54 Reserved */ 

/* vector 55 Reserved */ 

/* vector 56 Reserved */ 

/* vector 57 Reserved */ 

/* vector 58 Reserved */ 

/* vector 59 Reserved */ 

/* vector 60 Reserved */ 

/* vector 61 Reserved */ 

/* vector 62 Reserved */ 

/* vector 63 Reserved */ 

/* vector 64 CMIA0 8Bit0 */
__interrupt(vect=64) void INT_CMIA0_8BIT0(void) {/* sleep(); */}

/* vector 65 CMIB0 8Bit0 */
__interrupt(vect=65) void INT_CMIB0_8BIT0(void) {/* sleep(); */}

/* vector 66 OVI0 8Bit0 */
__interrupt(vect=66) void INT_OVI0_8BIT0(void) {/* sleep(); */}

/* vector 67 Reserved */ 

/* vector 68 CMIA1 8Bit1 */
__interrupt(vect=68) void INT_CMIA1_8BIT1(void) {/* sleep(); */}

/* vector 69 CMIB1 8Bit1 */
__interrupt(vect=69) void INT_CMIB1_8BIT1(void) {/* sleep(); */}

/* vector 70 OVI1 8Bit1 */
__interrupt(vect=70) void INT_OVI1_8BIT1(void) {/* sleep(); */}

/* vector 71 Reserved */ 

/* vector 72 DEND0A DMAC */
__interrupt(vect=72) void INT_DEND0A_DMAC(void) {/* sleep(); */}

/* vector 73 DEND0B DMAC */
__interrupt(vect=73) void INT_DEND0B_DMAC(void) {/* sleep(); */}

/* vector 74 DEND1A DMAC */
__interrupt(vect=74) void INT_DEND1A_DMAC(void) {/* sleep(); */}

/* vector 75 DEND1B DMAC */
__interrupt(vect=75) void INT_DEND1B_DMAC(void) {/* sleep(); */}

/* vector 76 Reserved */ 

/* vector 77 Reserved */ 

/* vector 78 Reserved */ 

/* vector 79 Reserved */ 

/* vector 80 ERI0 SCI0 */
__interrupt(vect=80) void INT_ERI0_SCI0(void) {/* sleep(); */}

/* vector 81 RXI0 SCI0 */
//__interrupt(vect=81) void INT_RXI0_SCI0(void) {/* sleep(); */}

/* vector 82 TXI0 SCI0 */
__interrupt(vect=82) void INT_TXI0_SCI0(void) {/* sleep(); */}

/* vector 83 TEI0 SCI0 */
__interrupt(vect=83) void INT_TEI0_SCI0(void) {/* sleep(); */}

/* vector 84 ERI1 SCI1 */
__interrupt(vect=84) void INT_ERI1_SCI1(void) {/* sleep(); */}

/* vector 85 RXI1 SCI1 */
__interrupt(vect=85) void INT_RXI1_SCI1(void) {/* sleep(); */}

/* vector 86 TXI1 SCI1 */
__interrupt(vect=86) void INT_TXI1_SCI1(void) {/* sleep(); */}

/* vector 87 TEI1 SCI1 */
__interrupt(vect=87) void INT_TEI1_SCI1(void) {/* sleep(); */}

/* vector 88 ERI2 SCI2 */
__interrupt(vect=88) void INT_ERI2_SCI2(void) {/* sleep(); */}

/* vector 89 RXI2 SCI2 */
__interrupt(vect=89) void INT_RXI2_SCI2(void) {/* sleep(); */}

/* vector 90 TXI2 SCI2 */
__interrupt(vect=90) void INT_TXI2_SCI2(void) {/* sleep(); */}

/* vector 91 TEI2 SCI2 */
__interrupt(vect=91) void INT_TEI2_SCI2(void) {/* sleep(); */}

/* vector 92 Reserved */ 

/* vector 93 Reserved */ 

/* vector 94 Reserved */ 

/* vector 95 Reserved */ 

/* vector 96 Reserved */ 

/* vector 97 Reserved */ 

/* vector 98 Reserved */ 

/* vector 99 Reserved */ 

/* vector 100 Reserved */ 

/* vector 101 Reserved */ 

/* vector 102 Reserved */ 

/* vector 103 Reserved */ 

/* vector 104 EXIRQ0 USB */
__interrupt(vect=104) void INT_EXIRQ0_USB(void) {/* sleep(); */}

/* vector 105 EXIRQ1 USB */
__interrupt(vect=105) void INT_EXIRQ1_USB(void) {/* sleep(); */}

/* vector 106 Reserved */ 

/* vector 107 Reserved */ 

/* vector 108 Reserved */ 

/* vector 109 Reserved */ 

/* vector 110 Reserved */ 

/* vector 111 Reserved */ 

/* vector 112 Reserved */ 

/* vector 113 Reserved */ 

/* vector 114 Reserved */ 

/* vector 115 Reserved */ 

/* vector 116 Reserved */ 

/* vector 117 Reserved */ 

/* vector 118 Reserved */ 

/* vector 119 Reserved */ 

/* vector 120 Reserved */ 

/* vector 121 Reserved */ 

/* vector 122 Reserved */ 

/* vector 123 Reserved */ 

/* vector 124 Reserved */ 

/* vector 125 Reserved */ 

/* vector 126 Reserved */ 

/* vector 127 Reserved */ 

