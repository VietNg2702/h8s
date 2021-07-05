/***********************************************************************************
FILE NAME  		hwsetup.c
DESCRIPTION		hardware setup functions.
		This file contains the functions required to initialise the RSK just before
		calling main application.

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
/* 	This header file provides access to intrinsic functions useful for configuring
	and controlling the interrupts. */
#include <machine.h>

/***********************************************************************************
User Includes
***********************************************************************************/
/*	Following header file provides a structure to access on-chip I/O registers. */
#include "iodefine.h"
/*  Following header file provides common defines for widely used items. */
#include "rsk2215rdef.h"
/*	Following header file provides prototype for hardware setup function. */
#include "hwsetup.h"

/***********************************************************************************
User Program Code Prototypes
***********************************************************************************/
/* These functions are private so their prototypes are defined locally */
static void ConfigureOperatingFrequency(void);
static void EnablePeripheralModules(void);
static void ConfigurePortPins(void);

/***********************************************************************************
User Program Code
***********************************************************************************/

/***********************************************************************************
Function Name : HardwareSetup
Description   :	Sets up the hardware.
		This function makes a call to initialisation functions to configure the CPU
		operating frequency, port pins & relevant on-chip modules (i.e. such as ADC,
		timer etc.) in order to setup the RSK for the main application.
Parameters    :	none
Return value  :	none
***********************************************************************************/
void HardwareSetup(void)
{    
	ConfigureOperatingFrequency();
	ConfigurePortPins();
	EnablePeripheralModules();
//	ConfigureInterrupts();
}
/***********************************************************************************
End of function HardwareSetup
***********************************************************************************/

/***********************************************************************************
Function Name : ConfigureOperatingFrequency
Description	  : Sets up CPU operating speed.
		This function configures the CPU operating frequency. 
Parameters	  : none
Return value  : none
***********************************************************************************/
void ConfigureOperatingFrequency(void)
{
/*	Set CPU operating frequencies.
	Clock output is disabled.
	CPU operates in High-speed mode	 */
	SCKCR.BIT.SCK = 0x00;

	/*	Bypass the PLL.	*/
	LPWCR.BIT.STC = 3;
}
/***********************************************************************************
End of function ConfigureOperatingFrequency
***********************************************************************************/

/***********************************************************************************
Function Name : ConfigurePortPins
Description	  : Configures port pins of the MCU.
		This function configures the port pins so that it can be used by the 
		respective modules. It also configures the unused port pins as output low.
Parameters	  : none.
Return value  : none.
***********************************************************************************/
void ConfigurePortPins(void)
{
/* Port pins default to inputs. To ensure safe initialisation set the pin states
before changing the data direction registers. This will avoid any unintentional 
state changes on the external ports.
Many peripheral modules will override the setting of the port registers. Ensure that
the state is safe for external devices if the internal peripheral module is disabled
or powered down. */

/* General configuration for this RSK. Configure all unused pins as output low. */

/*	Configure port 1 pins -
	P17 - Inputs (Timer Input)
	P16 and P15 - Outputs
	P14 - Input (Switch)
	P13 to P10 - Outputs	*/
	P1.DDR = 0x6F;
	P1.DR.BYTE = 0x90;

/*	Configure port 3 pins -
	P36, P35 and P32 - Outputs.
	P34 and P31 - Inputs (RX pins)
	P33 and P30 - Outputs (TX pins)	*/
	P3.DDR = 0x6D;
	P3.DR.BYTE = 0x12;

/*	Configure port A pins -
	PA3 and PA0 - Outputs 
	PA2 - Input (PTRX).	
	PA1 - Output (PTTX).	*/
	PA.DDR = 0x0B;	
	PA.DR.BYTE |= 0x01;

/*	Configure port E pins -
	PE7 to PE4 - Outputs (LCD data)
	PE3 and PE2 - Outputs
	PE1 and PE0 - Outputs (LCD control)	*/
	PE.DDR = 0xFF;
	PE.DR.BYTE = 0x00;

/*	Configure port F pins -
	PF7 - Input.
	PF6, PF5 and PF4 - Outputs.
	PF3 and PF0 - Inputs (Switches).
	PF2 and PF1 - Outputs (LEDs)	*/
	PF.DDR = 0x76;
	/*	Turn off the LEDs and make other output pins LOW.	*/
	PF.DR.BYTE = 0x8F;

/*	Configure port G pins -
	PG4, PG3 and PG2 - Outputs
	PG1 - Inputs (IRQ input)
	PG0 - Output (LEDs)		*/
	PG.DDR = 0x1D;
	/*	Turn off LED3 and make other output pins LOW.	*/	
	PG.DR.BYTE = 0x0F;
	
/*	Configure unused port pins as output low.	
	Note - Port4 and Port9 do not have DDR registers.	*/

	P7.DDR = PC.DDR = PD.DDR = SET_BYTE_HIGH;
	P7.DR.BYTE = PC.DR.BYTE = PD.DR.BYTE = SET_BYTE_LOW;
}
/***********************************************************************************
End of function ConfigurePortPins
***********************************************************************************/

/***********************************************************************************
Function Name : EnablePeripheralModules
Description   : Enables Peripheral Modules before use.
		This function enables the on-chip modules used by the main application.
Parameters	  : none
Return value  : none
***********************************************************************************/
void EnablePeripheralModules(void)
{
	/* Enable SCI_0 module by clearing the module stop mode bit. */
	MSTP.CRB.BIT._SCI0 = SET_BIT_LOW;
}
/***********************************************************************************
End of function EnablePeripheralModules
***********************************************************************************/
