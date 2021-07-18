/******************************************************************************
* DISCLAIMER:
* The software supplied by Renesas Technology Europe Ltd is
* intended and supplied for use on Renesas Technology products.
* This software is owned by Renesas Technology Europe, Ltd. Or
* Renesas Technology Corporation and is protected under applicable
* copyright laws. All rights are reserved.
*
* THIS SOFTWARE IS PROVIDED "AS IS". NO WARRANTIES, WHETHER EXPRESS,
* IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* APPLY TO THIS SOFTWARE. RENESAS TECHNOLOGY AMERICA, INC. AND
* AND RENESAS TECHNOLOGY CORPORATION RESERVE THE RIGHT, WITHOUT
* NOTICE, TO MAKE CHANGES TO THIS SOFTWARE. NEITHER RENESAS
* TECHNOLOGY AMERICA, INC. NOR RENESAS TECHNOLOGY CORPORATION SHALL,
* IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
* CONSEQUENTIAL DAMAGES FOR ANY REASON WHATSOEVER ARISING OUT OF THE
* USE OR APPLICATION OF THIS SOFTWARE.
******************************************************************************/

/* Copyright (C) 2009. Renesas Technology Europe, All Rights Reserved */

/*””FILE COMMENT””******************************* Technical reference data ****
* File Name		: hwsetup.c
* Version 		: 1.00
* Device 		: H8S/2456R (R4F24569VFQV)
* Tool Chain 	: HEW, Hitachi H8S, H8/300 Standard Toolchain v6.2
* H/W Platform	: RSK2H8S2456R
* Description 	: Contains hardware setup functions
******************************************************************************/

/******************************************************************************
* History 		: 17.06.2009 Ver. 1.00 First Release
*””FILE COMMENT END””*********************************************************/

/******************************************************************************
User Includes (Project level includes)
******************************************************************************/
/* Following header file provides a structure to access on-chip I/O 
   registers. */
#include "iodefine.h"
/* Following header file provides common defines for widely used items. */
#include "rsk2456rdef.h"
/* Following header file provides prototypes for hardware configuration
   functions. */
#include "hwsetup.h"

/******************************************************************************
User Program Code Prototypes
******************************************************************************/
/* These functions are private so their prototypes are defined locally */
static void ConfigureOperatingFrequency(void);
static void EnablePeripheralModules(void);
static void ConfigurePortPins(void);

/******************************************************************************
User Program Code 
******************************************************************************/

/*””FUNC COMMENT””*************************************************************
* Outline 		: HardwareSetup
* Description 	: Sets up the hardware.
*   			  This function calls the hardware initialization functions to
*				  configure the CPU operating frequency, port pins & required
*				  on-chip modules in order to setup the RSK for the main
*				  application.
* Argument  	: none
* Return value  : none
*””FUNC COMMENT END””*********************************************************/

void HardwareSetup(void)
{    
	/* Configures CPU clock	*/
	ConfigureOperatingFrequency();

	/* Configures port pins	*/
	ConfigurePortPins();

	/* Enables required on-chip peripherals	*/
	EnablePeripheralModules();
}
/******************************************************************************
End of function HardwareSetup
******************************************************************************/

/*””FUNC COMMENT””*************************************************************
* Outline 		: ConfigureOperatingFrequency
* Description 	: Sets up operating speed and configures the main & sub-clock
*				  and USB clock	
* Argument  	: none
* Return value  : none
*””FUNC COMMENT END””*********************************************************/

static void ConfigureOperatingFrequency(void)
{
	/* Delay Counter */
	volatile unsigned long delayCnt;
	
	/* Frequency Multiplication Factor Switching Mode Select.
	   Specified multiplication factor is valid immediately after STC1 and 
	   STC0 bits are rewritten. */
	
	SYSTEM.SCKCR.BIT.STCS = 0x1;

	/* Frequency Multiplication Factor for System Clock PLL circuit
	   Multiplication factor = '2' selected.
	   System-clock PLL circuit = 16MHz
	   Multiplication factor = 2 
	   System clock to 'PHI' pin = System-clock PLL circuit (16MHz) * 2 = 32MHz */
	
	SYSTEM.PLLCR.BIT.STC = 0x01;
	
	for (delayCnt=0; delayCnt < 0x100000; delayCnt++)
	{
		/* Add delay for PLL to stabilise. */	
	}
	
	/* Frequency Multiplication Factor for USB PLL Circuit Setting
	   Multiplication factor = '3' selected.
	   System-clock PLL circuit = 16MHz
	   Multiplication factor = 3
	   USB dedicated clock = System-clock PLL circuit (16MHz) * 3 = 48MHz */
	
	SYSTEM.USPLLCR.BIT.USSTC = 0x01;
	
	for (delayCnt=0; delayCnt < 0x100000; delayCnt++)
	{
		/* Add delay for PLL to stabilise. */	
	}
}
/******************************************************************************
End of function ConfigureOperatingFrequency
******************************************************************************/

/*””FUNC COMMENT””*************************************************************
* Outline 		: ConfigurePortPins
* Description 	: Configures MCU port pins. This function configures the port 
*				  pins so that it can be used by the respective modules. It 
*				  also configures the unused port pins as output low.
* Argument 		: none
* Return value 	: none
*””FUNC COMMENT END””*********************************************************/

static void ConfigurePortPins(void)
{
	/* Port pins default to inputs. To ensure safe initialisation set the pin 
	   states before changing the data direction registers. This will avoid 
	   any unintentional state changes on the external ports. Many peripheral 
	   modules will override the setting of the port registers. Ensure that 
	   the state is safe for external devices if the internal peripheral module 
	   is disabled or powered down. */

	/* General configuration for this RSK. Configure all unused pins as output low. */

	/*	Configure port 1 pins as follows -
	P11:P10		- DLCD5:DLCD4	- 11 (LCD pins, configured as output low)
	P12			- TIOCC0 		- 0  (TIOCC0, TCLKA pin, configured as input)
	P13			- TIOCD0		- 1  (Unused pin, configured as output low)	
	P14			- SSO0A_TIOCA1	- 1  (SSO pin, configured as output low) 	
	P15			- SSI0A			- 0  (SSI pin, configured as input pin)
	P16			- SSCK0A_TIOCA2	- 1  (SSCK pin, configured as output low) 
	P17			- P17_SCS0An	- 1  (SCS pin, configured as output low) */ 	
	
	P1.DR.BYTE = 0x00;
	P1.DDR = 0xDB;
	
	/*	Configure port 2 pins as follows -
	P20				- PUPD+			- 1 (PULLUP control pin for D+signal,
										 configured as output low)
	P24:P23:P22:P21	- Reserved		- 0000
	P25				- VbusDTCT		- 0 (USB cable connection monitor pin)
	P26				- P26_DLCD6_IO6	- 1 (LCD pin, configured as output low)
	P27				- P27_DLCD7_IO7	- 1 (LCD pin, configured as output low) */
	
	P2.DR.BYTE = 0x00;
	P2.DDR = 0xC1;
	
	/*	Configure port 3 pins as follows -
	P30		- TXD0			- 1 (UART0 TX pin, configured as output low)
	P31		- TXD1			- 1 (UART1 TX pin, configured as output low)
	P32		- RXD0			- 0 (UART0 RX pin, configured as input)
	P33		- RXD1			- 0 (UART1 RX pin, configured as input)
	P34		- SCK0_SDA0		- 1 (SSU clock input/output pin, configured as output low)
	P35		- DLCDRS_SCL0	- 1 (LCD pin, configured as output low) */
	
	P3.DR.BYTE = 0x00;	
	P3.DDR = 0x33;
	
	/* Note - Port4 does not have DDR registers.	*/

	/*	Configure port 5 pins as follows -
	P50		- IRQ0An_TXD2	- 1 (TXD2 pin, configured as output low)
	P51		- IRQ1An_RXD2	- 0 (RXD2 pin, configured as input)
	P52		- IRQ2An_SCK2	- 0 (SCK2 pin, configured as input)
	P53		- TRSTn			- 0 (No change, E10A pin) */
	
	P5.DR.BYTE &= (unsigned char) 0xF8;		
	P5.DDR = 0x01;
	
	/*	Configure port 6 pins as follows -
	P60		- LCD_GPIO3			- 1 (LCD pin, configured as output low)
	P61		- IRQ9AN - SW1		- 0 (SW1 switch pin, configured as input)
	P62		- LCD_GPIO4			- 1 (LCD pin, configured as output low)
	P63		- TEND1n_LED0_IO0 	- 1 (LED pin, configured as output high)
	P64		- CSn_SDRAM			- 1 (SDRAM chip select pin, configured 
									 as output high)
	P65		- DACK1n_LED1_IO1	- 1 (LED pin, configured as output high) */
	
	P6.DR.BYTE = 0x38;	
	P6.DDR = 0x3D;
	
	/* Note - Port7 does not exists on this device. */

	/*	Configure port 8 pins as follows -
	P80		- EDREQ2n			- 0 (EXDMAC request input pin) 		
	P81		- IRQ1Bn_TXD3 - SW2	- 0 (SW2 switch pin, configured as input)
	P82		- IRQ2Bn - SW3		- 0 (SW3 switch pin, configured as input)
	P83		- SCSn_IRQ3Bn_RXD3	- 1 (Unused pin, configured as output low) 	
	P84 	- EDACK2n			- 1 (EXDMAC acknowledgement pin,    
									 configured as output high)
	P85		- DLCDE_SCK3		- 1 (LCD pin, configured as output low) */
	
	P8.DR.BYTE = 0x10;	
	P8.DDR = 0x38;
	
	/* Note - Port9 does not have DDR registers.	*/
	
	/* Configure port A pins as follows - 
	PA0		- A(16)		- 1  (Address A16 output) 	
	PA1		- A(17)		- 1  (Address A17 output) 	
	PA2		- A(18)		- 1  (Address A18 output) 	
	PA3		- A(19)		- 1  (Address A19 output) 	
	PA4		- A(20)		- 1  (Address A20 output) 	
	PA5		- A(21)		- 1  (Address A21 output) 
	PA6		- A(22)		- 1  (Address A22 output) 	
	PA7		- A(23)		- 1  (Address A23 output) 	*/
	
	PA.DDR = 0xFF;
	
	/* Port Function Control Register 1 (PFCR1) -
	b0		- A16E		- 1 (A16 output when PA0DDR = 1) 
	b1		- A17E		- 1 (A17 output when PA1DDR = 1
	b2		- A18E		- 1 (A18 output when PA2DDR = 1)
	b3		- A19E		- 1 (A19 output when PA3DDR = 1)
	b4		- A20E		- 1 (A20 output when PA4DDR = 1)
	b5		- A21E		- 1 (A21 output when PA5DDR = 1)
	b6		- A22E		- 1 (A22 output when PA6DDR = 1)
	b7		- A23E		- 1 (A23 output when PA7DDR = 1) */
	
	PFC.PFCR1.BYTE = 0xFF;
	
	/* Configure port B pins as follows	
	PB0		- A(8)		- 1  (Address A8 output) 	
	PB1		- A(9)		- 1  (Address A9 output) 	
	PB2		- A(10)		- 1  (Address A10 output) 	
	PB3		- A(11)		- 1  (Address A11 output) 	
	PB4		- A(12)		- 1  (Address A12 output) 	
	PB5		- A(13)		- 1  (Address A13 output) 
	PB6		- A(14)		- 1  (Address A14 output) 	
	PB7		- A(15)		- 1  (Address A15 output) 	*/
	
	PB.DDR = 0xFF;
	
	/* Configure port C pins as follows	
	PC0		- A(0)		- 1  (Address A0 output) 	
	PC1		- A(1)		- 1  (Address A1 output) 	
	PC2		- A(2)		- 1  (Address A2 output) 	
	PC3		- A(3)		- 1  (Address A3 output) 	
	PC4		- A(4)		- 1  (Address A4 output) 	
	PC5		- A(5)		- 1  (Address A5 output) 
	PC6		- A(6)		- 1  (Address A6 output) 	
	PC7		- A(7)		- 1  (Address A7 output) 	*/
	
	PC.DDR = 0xFF;
	
	/* Pins belong to ports D & E default to data pins in CPU operating mode 4 */

	/*	Configure port J pins as follows -
	PJ0		- XDRIVE_LED2_IO2	- 1 (LED pin, configured as output high) 
	PJ1		- YDRIVE_LED3_IO3	- 1 (LED pin, configured as output high) 
	PJ2		- PJ2				- 1 (Unused pin, configured as output low) 	*/
	
	PJ.DR.BYTE = 0x03;		
	PJ.DDR = 0x07;
}
/******************************************************************************
End of function ConfigurePortPins
******************************************************************************/

/*””FUNC COMMENT””*************************************************************
* Outline 		: EnablePeripheralModules
* Description 	: Enables Peripheral Modules before use 
* Argument  	: none
* Return value  : none
*””FUNC COMMENT END””*********************************************************/

static void EnablePeripheralModules(void)
{
	/* Enable AD converter unit 0 by clearing the module stop mode bit. */
	SYSTEM.MSTPCRL.BIT._AD0 = SET_BIT_LOW;
}
/******************************************************************************
End of function EnablePeripheralModules
******************************************************************************/
