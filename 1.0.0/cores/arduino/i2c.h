#ifndef __H8S_I2C_H_
#define __H8S_I2C_H_

#include <stdint.h>
#include <stdbool.h>
#include "iodefine.h"
#include "rsk2456rdef.h"

typedef enum{
    IIC_SLAVE_RECV_MODE,
    IIC_SLAVE_TRANS_MODE,
    IIC_MASTER_RECV_MODE,
    IIC_MASTER_TRANS_MODE
}iic_mode_t;

#ifdef __cplusplus
extern "C" {
#endif

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_Init
* Description 	: Configuration of IIC module with 95 kbps bit rate.  
* Argument  	: none
* Return value  : none
***FUNC COMMENT END***********************************************************/
void IIC_Init(volatile struct st_iic2 * IIC , uint8_t frez);

/***FUNC COMMENT***************************************************************
* Outline 		: setStart_Condition
* Description 	: Configuration of IIC start condition 
* Argument  	: none
* Return value  : none
***FUNC COMMENT END************************************************************/

void setStart_Condition(volatile struct st_iic2 * IIC );

/***FUNC COMMENT****************************************************************
* Outline 		: setStop_Condition
* Description 	: Configuration of IIC stop condition 
* Argument  	: none
* Return value  : none
***FUNC COMMENT END************************************************************/

void setStop_Condition(volatile struct st_iic2 * IIC );

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_SetMode
* Description 	: IIC Transmit data routine
* Argument  	: (uint8_t) IIC mode
* Return value  : (mode) Master or Slave, Receive or Transmite
***FUNC COMMENT END************************************************************/

void IIC_SetMode(volatile struct st_iic2 * IIC , iic_mode_t mode);

/***FUNC COMMENT****************************************************************
* Outline 		: IIC_Rx_data
* Description 	: IIC receive data routine
* Argument  	: (unsigned char *) data - data to be received;
* Return value  : (char) - 1 = success, 0 = failure
***FUNC COMMENT END************************************************************/
char IIC_Rx_data(volatile struct st_iic2 * IIC , unsigned char *data);

/***FUNC COMMENT***************************************************************
* Outline 		: IIC_Tx_Byte
* Description 	: IIC Transmit data routine
* Argument  	: (unsigned char) data - Byte to be transmitted
* Return value  : (char) - return value
***FUNC COMMENT END************************************************************/
char IIC_Tx_Byte(volatile struct st_iic2 * IIC , unsigned char data);

/***FUNC COMMENT****************************************************************
* Outline 		: IIC_Transfer
* Description 	: Configuration of IIC to transmit/receive data 
* Argument  	: (unsigned char) RW - read/write mode of operation;
*				  (unsigned char *) data - data to be transmitted/received;
*				  (unsigned long)DeviceMem_Addr - device start of operation 
*				   address 
*				  (unsigned char) device_id	- Device ID
* Return value  : (char) - 1 = success, 0 = failure
***FUNC COMMENT END************************************************************/
char IIC_Transfer(volatile struct st_iic2 * IIC , unsigned char RW, unsigned char *data, 
                                                unsigned long DeviceMem_Addr);


/***FUNC COMMENT***************************************************************
* Outline 		: transmit_DevAddess
* Description 	: IIC Transmit device address routine
* Argument  	: (unsigned char) devAddress - Address to be transmitted
* Return value  : (char) - return value
***FUNC COMMENT END************************************************************/

char transmit_DevAddess(volatile struct st_iic2 * IIC , unsigned char devAddress);

#ifdef __cplusplus
}
#endif
#endif