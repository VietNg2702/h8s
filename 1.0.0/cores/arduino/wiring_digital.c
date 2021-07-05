#include "variant.h"
#include "wiring_digital.h"
#include "iodefine.h"

void pinMode(char PORT, uint32_t pin, uint32_t mode)
{
    switch(PORT)
    {
        case '1':
        {
            if(mode) P1.DDR |= (0x01<<pin);
            else P1.DDR &= (~(0x01<<pin));
	        
        }
        break;
        case '3':
        {
            if(mode) P3.DDR |= (0x01<<pin);
            else P3.DDR &= (~(0x01<<pin));
        }
        break;
        case '4':
        {
            if(mode) P4.DDR |= (0x01<<pin);
            else P4.DDR &= (~(0x01<<pin));
        }
        break;
        case '7':
        {
            if(mode) P7.DDR |= (0x01<<pin);
            else P7.DDR &= (~(0x01<<pin));
        }
        break;
        case '9':
        {
            if(mode) P9.DDR |= (0x01<<pin);
            else P9.DDR &= (~(0x01<<pin));
        }
        break;
        case 'A':
        {
            if(mode) PA.DDR |= (0x01<<pin);
            else PA.DDR &= (~(0x01<<pin));
        }
        break;
        case 'B':
        {
            if(mode) PB.DDR |= (0x01<<pin);
            else PB.DDR &= (~(0x01<<pin));
        }
        break;
        case 'C':
        {
            if(mode) PC.DDR |= (0x01<<pin);
            else PC.DDR &= (~(0x01<<pin));
        }
        break;
        case 'D':
        {
            if(mode) PD.DDR |= (0x01<<pin);
            else PD.DDR &= (~(0x01<<pin));
        }
        break;
        case 'E':
        {
            if(mode) PE.DDR |= (0x01<<pin);
            else PE.DDR &= (~(0x01<<pin));
        }
        break;
        case 'F':
        {
            if(mode) PF.DDR |= (0x01<<pin);
            else PF.DDR &= (~(0x01<<pin));
        }
        break;
        case 'G':
        {
            if(mode) PG.DDR |= (0x01<<pin);
            else PG.DDR &= (~(0x01<<pin));
        }
        break;
    }
  
}

void digitalWrite(char PORT, uint32_t pin, uint32_t val)
{
    switch(PORT)
    {
        case '1':
        {
           if(val) P1.DR.BYTE |= (0x01<<pin);
           else P1.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case '3':
        {
            if(val) P3.DR.BYTE |= (0x01<<pin);
           else P3.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case '4':
        {
            if(val) P4.DR.BYTE |= (0x01<<pin);
           else P4.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case '7':
        {
            if(val) P7.DR.BYTE |= (0x01<<pin);
           else P7.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case '9':
        {
            if(val) P9.DR.BYTE |= (0x01<<pin);
           else P9.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'A':
        {
            if(val) PA.DR.BYTE |= (0x01<<pin);
           else PA.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'B':
        {
            if(val) PB.DR.BYTE |= (0x01<<pin);
           else PB.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'C':
        {
            if(val) PC.DR.BYTE |= (0x01<<pin);
           else PC.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'D':
        {
            if(val) PD.DR.BYTE |= (0x01<<pin);
           else PD.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'E':
        {
            if(val) PE.DR.BYTE |= (0x01<<pin);
           else PE.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'F':
        {
            if(val) PF.DR.BYTE |= (0x01<<pin);
           else PF.DR.BYTE &= (~(0x01<<pin));
        }
        break;
        case 'G':
        {
            if(val) PG.DR.BYTE |= (0x01<<pin);
           else PG.DR.BYTE &= (~(0x01<<pin));
        }
        break;
    }
}

int digitalRead(char PORT, uint32_t pin)
{
    switch(PORT)
    {
        case '1':
        {
	        return ((P1.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case '3':
        {
            return ((P3.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case '4':
        {
            return ((P4.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case '7':
        {
            return ((P7.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case '9':
        {
            return ((P9.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'A':
        {
            return ((PA.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'B':
        {
            return ((PB.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'C':
        {
            return ((PC.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'D':
        {
            return ((PD.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'E':
        {
            return ((PE.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'F':
        {
            return ((PF.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
        case 'G':
        {
            return ((PG.PORT.BYTE &= (0x01<<pin))>>pin);
        }
        break;
    }

    return -1;
}

