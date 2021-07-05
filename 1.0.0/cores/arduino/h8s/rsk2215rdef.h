/***********************************************************************************
FILE NAME  		rsk2215rdef.h
DESCRIPTION		Contains macro defines for RSKH8S2215R starter kit.
            
Copyright   : 2006 Renesas Technology Europe Ltd.
Copyright   : 2006 Renesas Technology Corporation.
All Rights Reserved
***********************************************************************************/

/***********************************************************************************
Revision History
DD.MM.YYYY OSO-UID Description
03.10.2006 RTE-VNA First Release.
***********************************************************************************/

#ifndef RSK2215RDEF_H_INCLUDED
#define RSK2215RDEF_H_INCLUDED

/***********************************************************************************
Defines
***********************************************************************************/
/* General Values */
#define LED_ON			(0)
#define LED_OFF			(1)
#define SET_BIT_HIGH	(1)	
#define SET_BIT_LOW		(0)	
#define SET_BYTE_HIGH	(0xFF)
#define SET_BYTE_LOW	(0x00)
#define TRUE			(1)	
#define FALSE			(0)

/* LEDs */
	/*	Data registers associated with LEDs.	*/
#define	LED0			PF.DR.BIT.B1
#define	LED1			PF.DR.BIT.B2
#define	LED2			PA.DR.BIT.B0
#define	LED3			PG.DR.BIT.B0

#endif		/* RSK2215RDEF_H_INCLUDED */
