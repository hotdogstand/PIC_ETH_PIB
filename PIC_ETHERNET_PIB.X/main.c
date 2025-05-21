/*
 * File:   main.c
 * Author: Lawrence Esterlen
 *
 * Created on May 9, 2025, 8:05 PM
 */
#include "ProjectConfig.h"
#include "ProjectHeaders.h"


void main(void) 
{
    initHardware();
    
    while(1)
    {
        ADCON0 |= _ADCON0_ADON_MASK; 
    }
}
