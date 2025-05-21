/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#include <xc.h> // include processor files - each processor file is guarded.  

/* Configuration Word 1 */
#pragma config FCMEN = OFF          // Datasheet section 4.2 Pg91
#pragma config CSWEN = OFF
#pragma config CLKOUTEN = OFF
#pragma config RSTOSC = HFINTPLL
#pragma config FEXTOSC = OFF


/* Configuration Word 2 */
#pragma config DEBUG = OFF
#pragma config STVREN = ON
#pragma config PPS1WAY = ON
#pragma config ZCDDIS = OFF         // ZERO-CROSS DET IS ENABLED
#pragma config BORV = LO
#pragma config BOREN = OFF
#pragma config LPBOREN = 1
#pragma config PWRTE = ON
#pragma config MCLRE = ON

/* Configuration Word 3 */
#pragma config WDTCCS = HFINTOSC    // 31.25kHz internal reference clock
#pragma config WDTCWS = WDTCWS_5    // 25% WINDOW DELAY
#pragma config WDTE = SWDTEN        // Watchdog enabled via WDTCON0bits.SEN
#pragma config WDTCPS = WDTCPS_4    // 1:512 = ~16mS @ 31kHz

/* Configuration Word 4 */
#pragma config LVP = OFF            // HIGH-VOLTAGE AND MCLR MUST BE USED
#pragma config SCANE = not_available
#pragma config WRT = OFF

/* Configuration Word 5 */
#pragma config CPD = OFF            // EEPROM PROTESTION DISABLED
#pragma config CP = OFF             // CODE PROTECTION DISABLED

/* Define clock frequency (required for __delay_ms() and __delay_us() macros */
#define _xtal_freq 32000000