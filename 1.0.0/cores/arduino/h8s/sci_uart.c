/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb.-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************/

#include "sci_uart.h"
#include "inlines.h"



/******************************************************************************
 *
 *  FUNCTION     :  InitUART()
 *  DESCRIPTION  :  Initialise the UART module registers for use.
 *  PARAMETERS   :  uchar - Baud rate CSR register setting.
 *  RETURNS      :  uchar - Error code.
 *
 ******************************************************************************/
uchar InitUART(uchar Baud, uchar Parity, uchar Stops, uchar Length)
{
	int 	Wait = INTERVAL,
 			Error = ERR_OK;

 	volatile uchar	mr1_bits;

	/*--- Disable the Tx and Rx before configuring and reset MR to MR1 ---*/
	UART_CR = ( (CR_DIS_TX | CR_DIS_RX | CR_RESET_MR) );

	/*--- Set the POWER-DOWN OFF bit high ---*/
	UART_ACR = ( ACR_NO_STDBY );

	/*--- Determine the bit pattern for MR1 mode register...               ---*/

	/*--- Set the parity bit and character size bit in the MR1 value.      ---*/
	switch ( Parity )
	{
		case P_NONE :	mr1_bits |= MR1_NO_PAR;
						break;
		case P_EVEN :	mr1_bits |= ( MR1_PAR | MR1_PAR_EVEN );
						break;
		case P_ODD :	mr1_bits |= ( MR1_PAR | MR1_PAR_ODD );
						break;
		default :		Error = ERR_PAR;
						break;
	}

	switch ( Length )
	{
		case 7 :		mr1_bits |= MR1_7CHAR;
						break;
		case 8 :		mr1_bits |= MR1_8CHAR;
						break;
		default :		Error = ERR_LENGTH;
						break;
	}

	UART_MR1 = mr1_bits;


	/*--- Set the stop bits in MR2 ---*/
	switch ( Stops )
	{
		case 1 :		UART_MR2 = MR2_1STOP;
						break;
		case 2 :		UART_MR2 = MR2_2STOP;
						break;
		default :		Error = ERR_STOPS;;
						break;
	}


	/*--- Set the baud rate ---*/
	switch (Baud)
	{
		case CSR_4800	:
		case CSR_9600	:
		case CSR_38400	:	UART_CSR = Baud;
							break;

		default			:	Error = ERR_BAUD;
							break;
	}

 	/*--- Reset Tx'er, Rx'er and the error status. ---*/
 	UART_CR = CR_RESET_RX;
	UART_CR = CR_RESET_TX;
	UART_CR = CR_RESET_ERR;

	/*--- Select high baud set & set POWER-DOWN OFF bit high ---*/
	UART_ACR =  ( (ACR_NO_STDBY | ACR_HI_BAUD) );

	/*--- Re-enable the Tx and Rx ---*/
	UART_CR = ( (CR_EN_TX | CR_EN_RX) );

	while(Wait --);

#if 0	/*--- NOT USING INTERRUPTS? ---*/

	/*--- Use interrupts under CCR I bit control (mode 0) ---*/
	SYSCR &= 0x01;

	/*--- Set the IMR to accept no interrupts initially ---*/
	UART_IMR = 0x00;

	/*--- Enable IRQ2 interrupt for the UART and set to falling edge ---*/
	PFDDR &= (~0x01);
	IER    = 0x04;
	ISCRL  = 0x10;

	/*--- Enable interrupt reception if used ---*/
	set_ccr(0);

#endif

	return Error;
}



/******************************************************************************
 *
 *  FUNCTION     :  GetChar()
 *  DESCRIPTION  :  Receive 1 character from the UART.
 *  PARAMETERS   :  N/A
 *  RETURNS      :  uchar - Character received.
 *
 ******************************************************************************/
uchar GetChar(void)
{
	volatile uchar 	Input;

	Input = UART_SR;

    /*--- Poll until character ready. ---*/
    while ( !(UART_SR & SR_RXRDY) )
	{	;	}

    /*--- Get the character. ---*/
    Input = UART_RHR;

    /*--- Clear the RXRDY flag in SSR ---*/
    /*--- This is done automatically! ---*/
    /* UART_SR &= ~ SR_RXRDY; */

    return Input;
}




/******************************************************************************
 *
 *  FUNCTION     :  GetStr()
 *  DESCRIPTION  :  Get a stream of characters.
 *  PARAMETERS   :  uchar* - Buffer to store string.
 *                  WORD - maximum allowable length of string.
 *  RETURNS      :  N/A
 *
 ******************************************************************************/
void GetStr(char* String)
{

	volatile uchar Input;

    while ( (Input = ( GetChar() ) ))
    {
		*String++ = Input;
    }

    /*--- Null terminate the string. ---*/
    *String = '\0';
}






/******************************************************************************
 *
 *  FUNCTION     :  PutChar()
 *  DESCRIPTION  :  Transmit a single character.
 *  PARAMETERS   :  uchar - Data character to output.
 *  RETURNS      :  N/A
 *
 ******************************************************************************/
void PutChar(char Data)
{
	while(! (UART_SR & SR_TXRDY))	/* Wait until TXRDY = 1  */
	{
		;
	}

	UART_THR = Data;   				/* Set transmit data     */

	/*--- The SR_TXRDY bit is automatically cleared when the character ---*/
	/*--- is sent from the THR register to the transmit shift register.	  ---*/
	/* UART_SR &= ~ SR_TXRDY; */
}




/******************************************************************************
 *
 *  FUNCTION     :  PutStr()
 *  DESCRIPTION  :  Put a string of characters out.
 *  PARAMETERS   :  uchar* - Data buffer holding string to output.
 *  RETURNS      :  N/A
 *
 ******************************************************************************/
void PutStr(char* String)
{
	while ( *String != 0 )
		PutChar( *String++);
}

