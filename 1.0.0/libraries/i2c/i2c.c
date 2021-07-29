#include "i2c.h"

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_Init
* Description 	: Configuration of IIC module with 95 kbps bit rate.  
* Argument  	: none
* Return value  : none
***FUNC COMMENT END***********************************************************/

void IIC_Init(volatile struct st_iic2 * IIC , uint8_t frez)
{

    /* Configure the IIC pins as NMOS open-drain output pins	*/
    P3.ODR.BYTE = 0x30;	
    /* Enable the IIC Interface */
    IIC->ICCRA.BIT.ICE = 0x1;

    /* Reset IIC interface	*/
    IIC->ICCRB.BIT.IICRST = 1;

    delay(10000);

    IIC->ICCRB.BIT.IICRST = 0;

    /* Set the WAIT state */
    IIC->ICMR.BIT.WAIT = 0x1;
        
    /* Set the clock to 95.2 KHz */
    IIC->ICCRA.BIT.CKS = frez; //0x0c;

    /* Enable ACK signal check */
    IIC->ICIER.BIT.ACKE = 0x1;

}
/******************************************************************************
End of function Init_IIC
******************************************************************************/

/***FUNC COMMENT***************************************************************
* Outline 		: setStart_Condition
* Description 	: Configuration of IIC start condition 
* Argument  	: none
* Return value  : none
***FUNC COMMENT END************************************************************/

void setStart_Condition(volatile struct st_iic2 * IIC )
{
	/* Generate Start condition */
	IIC->ICCRB.BYTE = 0xBD;
	
	while (IIC->ICSR.BIT.TDRE == 0)
	{
		/* Wait till TDRE becomes 1 to validate that start condition 
		   is generated */	
	}
}
/******************************************************************************
End of function setStart_Condition
******************************************************************************/

/***FUNC COMMENT****************************************************************
* Outline 		: setStop_Condition
* Description 	: Configuration of IIC stop condition 
* Argument  	: none
* Return value  : none
***FUNC COMMENT END************************************************************/

void setStop_Condition(volatile struct st_iic2 * IIC )
{
	/* Generate Start condition */
	IIC->ICCRB.BYTE = 0x3D;
	
	/* Ensure the STOP condition is set */
	while (IIC->ICSR.BIT.STOP == 0)
	{
		/* wait for stop bit in ICSR is set */
	}	

	/* If set, clear Transmit End flag */
	if (IIC->ICSR.BIT.TEND == 1)
	{
		IIC->ICSR.BIT.TEND = SET_BIT_LOW;
	}	
}
/******************************************************************************
End of function setStop_Condition
******************************************************************************/

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_SetMode
* Description 	: IIC Transmit data routine
* Argument  	: (uint8_t) IIC mode
* Return value  : (mode) Master or Slave, Receive or Transmite
***FUNC COMMENT END************************************************************/

void IIC_SetMode(volatile struct st_iic2 * IIC , iic_mode_t mode)	
{
	IIC->ICCRA.BIT.MST = (mode&2)>>1;
	IIC->ICCRA.BIT.TRS = (mode&1);
}

/***FUNC COMMENT****************************************************************
* Outline 		: IIC_Rx_data
* Description 	: IIC receive data routine
* Argument  	: (unsigned char *) data - data to be received;
* Return value  : (char) - 1 = success, 0 = failure
***FUNC COMMENT END************************************************************/

char IIC_Rx_data(volatile struct st_iic2 * IIC , unsigned char *data)
{
	unsigned char  tmp;
	
	/* Stores return value	*/
	char ret_value = 1;	

	/* Read only one byte at a time	*/
	IIC->ICCRA.BIT.RCVD = 1;		
	
	/* 1 is sent at the acknowledge timing */
	IIC->ICIER.BIT.ACKBT = 1;			

	/* Clear 'Receive Data Register Full' flag	*/
	IIC->ICSR.BIT.RDRF = 0;	

	/*	 delay before starting reception */
	delay(800);

	/* Clear transmission end flag	 */
	if(IIC->ICSR.BIT.TEND == 1)
    {
		IIC->ICSR.BIT.TEND = 0;
	}

	/* Configure Master Receive mode */
	IIC->ICCRA.BIT.MST = 0x1;
	IIC->ICCRA.BIT.TRS = 0x0;

	/* Clear transmit buffer empty flag	 */	
	if(IIC->ICSR.BIT.TDRE == 1)
    {
		IIC->ICSR.BIT.TDRE = 0;
	}	
	
	/*	dummy read to start reception */
	tmp = IIC->ICDRR;		 

	/*	Check if reception is complete */	
	while(IIC->ICSR.BIT.RDRF == 0)
    {
	}	
		 
	/* Read the received data	*/
	*data = IIC->ICDRR;	

	/* Clear 'Receive Data Register Full' flag	*/		 
	IIC->ICSR.BIT.RDRF = 0;	
	
	return ret_value;
}
/******************************************************************************
End of function IIC_Rx_data
******************************************************************************/

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_Tx_Byte
* Description 	: IIC Transmit data routine
* Argument  	: (unsigned char) data - Byte to be transmitted
* Return value  : (char) - return value
***FUNC COMMENT END************************************************************/

char IIC_Tx_Byte(volatile struct st_iic2 * IIC , unsigned char data)
{
	/* Stores return value	*/
	char ret_value = 1;
	
	delay(1000);

	/* Clear transmission end flag	 */	
	if (IIC->ICSR.BIT.TEND == 1)
	{
		IIC->ICSR.BIT.TEND = 0;			
	}

    /* Configure Master Transmit mode */
	IIC->ICCRA.BIT.MST = 0x1;
	IIC->ICCRA.BIT.TRS = 0x1;

	while (IIC->ICSR.BIT.TDRE == 0)
	{
		/* Ensure that the SCI channel is not transmitting data */
	}
	
	/* Transmit the data */
	IIC->ICDRT = data;
	
	while (IIC->ICSR.BIT.TDRE == 0) 
	{
		/* Wait till data transmission is complete */	
	}

	/* Delay after writing a byte	*/ 
	delay(1000);
	
	/* Return the result */
	return ret_value;			
}
/******************************************************************************
End of function IIC_Tx_Byte
******************************************************************************/

/***FUNC COMMENT***************************************************************
* Outline 		: transmit_DevAddess
* Description 	: IIC Transmit device address routine
* Argument  	: (unsigned char) devAddress - Address to be transmitted
* Return value  : (char) - return value
***FUNC COMMENT END************************************************************/

char transmit_DevAddess(volatile struct st_iic2 * IIC , unsigned char devAddress)
{
	/* Stores return value	*/
	char ret_value = 1;
	
    /* Configure Master Transmit mode */
	IIC->ICCRA.BIT.MST = 0x1;
	IIC->ICCRA.BIT.TRS = 0x1;

	while (IIC->ICSR.BIT.TDRE == 0)
	{
		/* Wait till TDRE is set */
	}
	
	/* Transmit the device address */
	IIC->ICDRT = devAddress;
	
	while ((IIC->ICSR.BIT.TDRE == 0) && (IIC->ICSR.BIT.TEND == 1))
	{
		/* Wait till data transmission is complete */	
	}
	
	if (IIC->ICIER.BIT.ACKBR != 0)
	{
		/* Error in slave address selection */
		ret_value = 0;
	}
	
	/* Return the result */
	return ret_value;			
}
/******************************************************************************
End of function transmit_DevAddess
******************************************************************************/


