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
* File Name		: rsk2456rdef.h
* Version 		: 1.00
* Device 		: H8S/2456R (R4F24569VFQV)
* Tool Chain 	: HEW, Hitachi H8S, H8/300 Standard Tool chain v6.2
* H/W Platform	: RSK2H8S2456R
* Description 	: Defines for RSK2H8S2456R starter kit
******************************************************************************/

/******************************************************************************
* History 		: 17.06.2009 Ver. 1.00 First Release
*””FILE COMMENT END””*********************************************************/

#ifndef RSK2456RDEF_H
#define RSK2456RDEF_H

/******************************************************************************
Macro Defines
*******************************************************************************/
/* Peripheral Clock Speed = 32 MHz */
#define	PERIPHERAL_CLK_SPEED	32000000

/* Defines for SFRs belongs to port pins having the user switch connected */

#define	SW1 					P6.PORT.BIT.B1
#define SW2 					P8.PORT.BIT.B1
#define SW3 					P8.PORT.BIT.B2

/* Defines for SFRs belongs to port pins having the user LEDs connected */

#define	LED0					P6.DR.BIT.B3
#define	LED1					P6.DR.BIT.B5
#define	LED2					PJ.DR.BIT.B0
#define	LED3					PJ.DR.BIT.B1

/* Common Defines */
#define LED_OFF     			1
#define LED_ON      			0
#define TRUE    				1
#define FALSE   				0
#define SET_BIT_HIGH			1
#define SET_BIT_LOW				0
#define SET_BYTE_HIGH			0xFF
#define SET_BYTE_LOW			0x00
#define LED_BIT					1

#endif 		

