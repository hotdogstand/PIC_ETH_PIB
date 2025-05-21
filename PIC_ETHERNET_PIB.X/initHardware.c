
#ifndef _PROJECTCONFIG_H
#include "ProjectConfig.h"
#endif

void initHardware(void)
{
    //initPorts();
}

void initPeripheralMap()
{
    
}

void initPorts(void)
{
    TRISA = 0x00;
    TRISB = 0x00;
    TRISC = 0x00;
    TRISD = 0x00;
    TRISE = 0x00;
}

void initSPI1(){}
void initSPI2(){}
void initUART(){}
void initADC(){}
void initDAC(){}
void initPWM(){}
