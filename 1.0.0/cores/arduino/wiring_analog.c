#include "Arduino.h"
#include "wiring_analog.h"

/* FUNC COMMENT *************************************************************
* Outline		: ADC_Init
* Description	: Configuration of ADC channel AN0 in single mode, 
*				  externally triggered
* Argument		: none		
* Return value	: none
* FUNC COMMENT END *********************************************************/

static void ADC_Init(void)
{
	/* ADC conversion start flag. Set to 0 to stop ADC conversion */
	ADC0.ADCSR.BIT.ADST = 0;
	
	/* AD Control/Status Register for Unit 0 (ADCSR_0)
	b3:b2:b1:b0	- CH3:CH2:CH1:CH0	- 0000 (AN0 channel selected)
	b4			- EXCKS				- 0    (Clock Extension Select. Set to 0 to 
											configure 'ADCLK = PHI/4')
	b5			- ADST				- 0    (AD conversion stopped)
	b6			- ADIE				- 0    (AD Interrupt Disabled) 
	b7			- ADF				- 0	   (AD End Flag) */
	
	ADC0.ADCSR.BYTE = 0x00;
	
	/* AD Control Register (ADCR_0) Unit 0 
	b0		- EXTRGS		- 1  (Enables A/D conversion start 
								  by the ADTRG0-B pin)
	b1		- ADSTCLR		- 0  (Not applicable in ADC single
								  mode of operation)
	b3:b2	- CKS1:CKS0		- 10 (Clock Extension Select. Set to 0 to 
								  configure 'ADCLK = PHI/2')
	b5:b4	- SCANE:SCANS	- 00 (Single mode selected)
	b7:b6	- TRGS1:TRGS0	- 00 (Enables A/D conversion start 
								  by the ADTRG0-B pin) */
	ADC0.ADCR.BYTE = 0x09;	
	
		
}
/******************************************************************************
End of function ADC_Init
******************************************************************************/

static uint32_t ADC_Read(void)
{
    /* Initialize the variable "usADC_Result" used to store the ADC result */	
    volatile unsigned short usADC_Result = 0;

    while (ADC0.ADCSR.BIT.ADF == 0)
    {
        /* Wait till the AD conversion completes */
    }

    /* Clear the AD End Flag by software */
    ADC0.ADCSR.BIT.ADF = 0;

    /* Save the ADC result */
    usADC_Result = (unsigned short) ADC0.ADDRA;

    /*	Only 10 most significant bits of the result are valid.
    Shift the result by six bits to make it convenient to read */
    usADC_Result >>= 6;    

    /* Save the ADC result */
    return (uint32_t)usADC_Result;
}

uint32_t analogRead( uint32_t ulPin )
{
    ADC_Init();
    
    /* On start-up port pin PF0 defaults to input */
	/* Configure the port pin PF0 as AD trigger pin */
	PFC.PFCR4.BIT.ADTRG0S = 1;

    return ADC_Read();
}