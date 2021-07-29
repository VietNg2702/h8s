/****************************************************************************
* Description   : This program demonstrates the configuration of IIC module to
*         communicate with IIC EEPROM on the general application board.
*         The user enters a string on the terminal window which will be
*         written to the IIC EEPROM. The application then reads it back
*         from the EEPROM & displays back to the terminal window.
*         The size of string is limited up to 64 bytes.
*
* Operation     : 1. Connect PC and RSK2H8S2456R using standard RS232 cable.
*         2. Make following connections between RSK2H8S2456R and General 
*          application board.
*           ----------------------------------------------------
*           RSK2H8S2456R          General App. Board
*           ----------------------------------------------------
*           a. JA1-25 (or J4B-12) (IIC_SDA) -->   JA1-25 (SDA)
*           b. J4B-11 (IIC_SCL)   -->   JA1-26 (SCL)
*           c. JA1-1  (VCC)     -->   JA1-1 (CON_5V)
*           d. JA1-2  (GND)     -->   JA1-2 (GND)         
*         3. Run a terminal application (such as HyperTerminal) on the PC
*          with the following settings - 
*           Baud rate 19200, 8 data bits, 1 stop bit,  no parity.
*         4. Build this application and download it to the target. 
*         5. Click on the "Reset Go" icon available on 'Debug Run' toolbar.  
*         6. Welcome message will be shown on the terminal window.
*           7. Type a string (up to 64 characters) and press 'Enter'.
*           8. The entered string will be written to the EEPROM, read back 
*          from the EEPROM & will be displayed on the terminal window.
******************************************************************************/

#include <i2c.h>

/******************************************************************************
Macro Defines
******************************************************************************/
#define EEPROM_BUFF_LENGTH  64
#define RTC_READ      0xD1
#define RTC_WRITE     0xD0
#define EEPROM_READ     0xA1
#define EEPROM_WRITE    0xA0
#define WRITE       1
#define READ        0
#define TIMEOUT_CNT     0xffffu
#define DELAY_CNT       0xff
#define TIMEOUT_ERROR     0
#define BIT_RATE      100000  
#define string_size 11

/******************************************************************************
Global variables
******************************************************************************/
/* Buffer to store characters entered by user, also it is used to send 
them back */
unsigned char readBuff[EEPROM_BUFF_LENGTH] = "hello world";
/* Buffer to store characters received from EEPROM */
unsigned char recBuff[EEPROM_BUFF_LENGTH];

char IIC_Transfer(volatile struct st_iic2 * IIC , unsigned char RW, unsigned char *data, 
                                                unsigned long DeviceMem_Addr);
void setup() {
  // put your setup code here, to run once:
  IIC_Init(&IIC0, 0x0c);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* Device memory address */
  unsigned long memAddr = 0x00;
  
  /*  Used as a counter */
  unsigned char j;

  /* Write message to PC terminal */
  //text_write("\r\n>>Writing to FLASH...");

  for (j = 0; j < string_size; j++)
  {     
    /* Transfer string from buffer to IIC EEPROM */
    if (IIC_Transfer(&IIC0, WRITE,
      &readBuff[j], memAddr+j) == TIMEOUT_ERROR)
    {
      /* Display error message to PC terminal */
      //send_error_message();
    }

    /* Delay between byte writes */
    delay(100000);
  }
  
  /* Write message to PC terminal */
  //text_write("\r\n>>Reading from FLASH...\r\n");

  for (j = 0; j < string_size; j++)
  {
    /* Transfer string from IIC EEPROM to buffer */
    if (IIC_Transfer(&IIC0, READ, 
        &recBuff[j], memAddr+j) == TIMEOUT_ERROR)
    {
      /* Send the error message to PC terminal */
      //send_error_message();
    }
  }
    
  /* Send message to PC terminal */
  //text_write(">>The entered string is: \r\n");

  /* Send the content of the buffer read from IIC EEPROM  */
  //text_write((char *)recBuff);

  /* Send message to PC terminal */
  //text_write("\r\n>>Please, enter again...\r\n");
    
}

/***FUNC COMMENT****************************************************************
* Outline     : IIC_Transfer
* Description   : Configuration of IIC to transmit/receive data 
* Argument    : (unsigned char) RW - read/write mode of operation;
*         (unsigned char *) data - data to be transmitted/received;
*         (unsigned long)DeviceMem_Addr - device start of operation 
*          address 
*         (unsigned char) device_id - Device ID
* Return value  : (char) - 1 = success, 0 = failure
***FUNC COMMENT END************************************************************/

char IIC_Transfer(volatile struct st_iic2 * IIC , unsigned char RW, unsigned char *data, 
                                                unsigned long DeviceMem_Addr)
{
  /* Delay Counter */
  unsigned long delayCnt = DELAY_CNT;
  
  /* EEPROM address location variables */
  unsigned char AddrH, AddrL; 
  
  /* Stores return value  */
  char ret_value = 1; 
  
  /* MSB of address */
  AddrH = (unsigned char)(DeviceMem_Addr >> 8);
  
  /* LSB of address */
  AddrL = (unsigned char)DeviceMem_Addr;
  
  
  /* Generate start condition */
  setStart_Condition(IIC);
  
  /* Transmit the device address */
  if (transmit_DevAddess(IIC, EEPROM_WRITE) == 0)
  {
    /* Generate stop condition */
    setStop_Condition(IIC);
    
    /* Send error message */
  }

  /* Transmit MSB EEPROM memory address */
  if(IIC_Tx_Byte(IIC, AddrH) == TIMEOUT_ERROR) 
  {
    /* If error in transmission operation, return TIMEOUT_ERROR */
    ret_value = TIMEOUT_ERROR;
  }

  if(ret_value != TIMEOUT_ERROR)
  {
    /* Transmit LSB EEPROM memory address */
    if(IIC_Tx_Byte(IIC, AddrL) == TIMEOUT_ERROR) 
    {
      /* If error in transmission operation, return TIMEOUT_ERROR */
      ret_value = TIMEOUT_ERROR;
    }
  }
    
  if(ret_value != TIMEOUT_ERROR)
  {
    if(RW == READ)
    {
      /* Generate start condition */
      setStart_Condition(IIC);
      
      /* Transmit the device address + READ condition */
      if (transmit_DevAddess(IIC, EEPROM_READ) == 0)
      {
        /* Generate stop condition */
        setStop_Condition(IIC);
    
        /* Send error message */  
      }
      
    
      /* Receive string from EEPROM */
      if (IIC_Rx_data(IIC, data) == TIMEOUT_ERROR) 
      {
        /* If error in reception operation, return TIMEOUT_ERROR */
        ret_value = TIMEOUT_ERROR;
      }
    }
    else
    {
      if (IIC_Tx_Byte(IIC, *data) == TIMEOUT_ERROR) 
      {
        /* If error in transmission operation, return TIMEOUT_ERROR */
        ret_value = TIMEOUT_ERROR;
      }

      /* Clear TEND flag for the end of transmission */
      IIC->ICSR.BIT.TEND = 0;
    }

    if(ret_value != TIMEOUT_ERROR)  
    {
      /* Generate stop condition */
      setStop_Condition(IIC);
      
      /* Delay routine for setup/hold time */
      delay(delayCnt);
    }
  }

  /* Return the result */
  return ret_value;
}
/******************************************************************************
End of function IIC_Transfer
******************************************************************************/
