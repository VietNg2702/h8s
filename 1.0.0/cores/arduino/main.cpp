/***********************************************************************/
/*                                                                     */
/*  FILE        :h8s_arduino.c                                         */
/*  DATE        :Wed, Jul 14, 2021                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :H8S/2215                                              */
/*                                                                     */
/*  This file is generated by KPIT GNU Project Generator.              */
/*                                                                     */
/***********************************************************************/
#define ARDUINO_MAIN
#include "Arduino.h"  
#include "UartClass.h"
#include "hwsetup.h"

UARTClass Serial(6,8);

int main(void)
{
    HardwareSetup();
    systick_config();
    setup();
    while(1)
    {
        loop();
        if (serialEventRun) serialEventRun();
    }

    return 0;

}


