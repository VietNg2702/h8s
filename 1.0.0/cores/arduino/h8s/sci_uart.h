/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************/

/********************************************************************
 *                                                                  *
 *  FILE          : sci_uart.h                                      *
 *  PURPOSE       : Register definitions for the UART fitted to     *
 *                  the EVB2623                                     *
 *                                                                  *
 ********************************************************************/

#ifndef _SCI_UART_
#define _SCI_UART_
#include "macros.h"

#define	uchar	unsigned char	/* user-defined data types */

#define UART_BASE   0x00400000	/* Start of CS2 area where UART is */


/********************************************************************
 SERIAL REGISTER DEFINITIONS :
 These pairs of registers share the same addresses as they are
 controlled by the RDN and WRN lines on the UART chip.
 ********************************************************************/
#define UART_MR		_DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x0))	/* Mode Register             */
#define UART_MR1	UART_MR												/* Mode Register 1           */
#define UART_MR2	UART_MR												/* Mode Register 2           */

#define UART_SR     _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x1))  /* Status                    */
#define UART_CSR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x1))  /* Clock Select              */

#define UART_BRG    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x2))  /* Baud Rate Generator Test  */
#define UART_CR     _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x2))  /* Command                   */

#define UART_RHR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x3))  /* Receive Holding           */
#define UART_THR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x3))  /* Transmit Holding          */

#define UART_1_16X  _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x4))  /* Clock Test                */
#define UART_ACR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x4))  /* Aux Control               */

#define UART_ISR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x5))  /* Interrupt Status          */
#define UART_IMR    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x5))  /* Interrupt Mask            */

#define UART_CTU    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x6))  /* Counter Upper Output      */
#define UART_CTUR   _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x6))  /* Counter Upper Preset      */

#define UART_CTL    _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x7))  /* Counter Lower Output      */
#define UART_CTLR   _DREF(_MPTR_(_VOL(_US(char)))(UART_BASE + 0x7))  /* Counter Lower Preset      */

/********************************************************************
 REGISTER MASKS / SETTINGS
 ********************************************************************/
/*--- Mode Register ---*/
#define MR1_PAR				0x00
#define	MR1_NO_PAR			0x10
#define MR1_PAR_ODD			0x00
#define MR1_PAR_EVEN			0x04
#define MR1_8CHAR			0x03
#define MR1_7CHAR			0x02

#define MR2_1STOP			0x07
#define MR2_2STOP			0x0F

/*--- Clock Select Register ---*/
/*--- These values are valid for ACR[7] = 0 (ACR_HI_BAUD) ---*/
/*---                        and ACR[7] = 1 (ACR_LO_BAUD) ---*/
#define CSR_4800			0x99
#define CSR_9600       		 	0xBB
#define CSR_38400      		 	0xCC

/*--- Command Register ---*/
#define CR_RESET_MR    		 	0x10
#define CR_RESET_RX    		 	0x20
#define CR_RESET_TX    		 	0x30
#define CR_RESET_ERR   		 	0x40
#define CR_DIS_TX			0x08
#define CR_EN_TX			0x04
#define CR_DIS_RX			0x02
#define CR_EN_RX			0x01

/*--- Aux Control Register ---*/
#define ACR_HI_BAUD    		 	0x00
#define ACR_LO_BAUD    		 	0x80
#define ACR_NO_STDBY   		 	0x08

/*--- Interrupt Mask Register ---*/
#define IMR_TXRDY      		 	0x01
#define IMR_TXEMPTY    		 	0x02
#define IMR_RXRDY      		 	0x04

/*--- Channel Status Register ---*/
#define SR_FRAME_ERR   			0x40
#define SR_PAR_ERR     			0x20
#define SR_ORUN_ERR    			0x10
#define SR_TXEMT    			0x08
#define SR_TXRDY       			0x04
#define SR_FFULL       			0x02
#define SR_RXRDY       			0x01

/*--- Interrupt Status Register --*/
#define ISR_RXRDY      			0x04
#define ISR_TX_EMPTY   			0x02
#define ISR_TXRDY      			0x01


/*--- Parity values used in port initialisation ---*/
#define P_NONE 				0
#define P_EVEN 				1
#define P_ODD  				2

/*--- Initialisation error codes ---*/
#define ERR_OK				0
#define ERR_PAR				1
#define	ERR_LENGTH			2
#define	ERR_STOPS			3
#define	ERR_BAUD			4

#define INTERVAL 			5000		/* At least interval to transmit 1-bit */


/********************************************************************
 FUNCTION PROTOTYPES
 ********************************************************************/
uchar 		InitUART(uchar Baud, uchar Parity, uchar Stops, uchar Length);
uchar 		GetChar( void );
void		GetStr( char* String );
void		PutChar( char Data );
void		PutStr( char* String );



#endif
