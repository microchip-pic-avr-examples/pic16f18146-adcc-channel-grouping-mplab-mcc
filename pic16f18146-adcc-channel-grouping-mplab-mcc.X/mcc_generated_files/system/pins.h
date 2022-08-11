/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define LED_D6_TRIS                 TRISAbits.TRISA2
#define LED_D6_LAT                  LATAbits.LATA2
#define LED_D6_PORT                 PORTAbits.RA2
#define LED_D6_WPU                  WPUAbits.WPUA2
#define LED_D6_OD                   ODCONAbits.ODCA2
#define LED_D6_ANS                  ANSELAbits.ANSA2
#define LED_D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D6_GetValue()           PORTAbits.RA2
#define LED_D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D6_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_D6_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA5 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA5
#define LED_D4_LAT                  LATAbits.LATA5
#define LED_D4_PORT                 PORTAbits.RA5
#define LED_D4_WPU                  WPUAbits.WPUA5
#define LED_D4_OD                   ODCONAbits.ODCA5
#define LED_D4_ANS                  ANSELAbits.ANSA5
#define LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA5
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RB4 aliases
#define FSR_1_TRIS                 TRISBbits.TRISB4
#define FSR_1_LAT                  LATBbits.LATB4
#define FSR_1_PORT                 PORTBbits.RB4
#define FSR_1_WPU                  WPUBbits.WPUB4
#define FSR_1_OD                   ODCONBbits.ODCB4
#define FSR_1_ANS                  ANSELBbits.ANSB4
#define FSR_1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define FSR_1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define FSR_1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define FSR_1_GetValue()           PORTBbits.RB4
#define FSR_1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define FSR_1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define FSR_1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define FSR_1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define FSR_1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define FSR_1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define FSR_1_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define FSR_1_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB6 aliases
#define FSR_2_TRIS                 TRISBbits.TRISB6
#define FSR_2_LAT                  LATBbits.LATB6
#define FSR_2_PORT                 PORTBbits.RB6
#define FSR_2_WPU                  WPUBbits.WPUB6
#define FSR_2_OD                   ODCONBbits.ODCB6
#define FSR_2_ANS                  ANSELBbits.ANSB6
#define FSR_2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define FSR_2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define FSR_2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define FSR_2_GetValue()           PORTBbits.RB6
#define FSR_2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define FSR_2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define FSR_2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define FSR_2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define FSR_2_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define FSR_2_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define FSR_2_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define FSR_2_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RC2 aliases
#define FSR_3_TRIS                 TRISCbits.TRISC2
#define FSR_3_LAT                  LATCbits.LATC2
#define FSR_3_PORT                 PORTCbits.RC2
#define FSR_3_WPU                  WPUCbits.WPUC2
#define FSR_3_OD                   ODCONCbits.ODCC2
#define FSR_3_ANS                  ANSELCbits.ANSC2
#define FSR_3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define FSR_3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define FSR_3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define FSR_3_GetValue()           PORTCbits.RC2
#define FSR_3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define FSR_3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define FSR_3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define FSR_3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define FSR_3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define FSR_3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define FSR_3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define FSR_3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_RC6 aliases
#define FSR_4_TRIS                 TRISCbits.TRISC6
#define FSR_4_LAT                  LATCbits.LATC6
#define FSR_4_PORT                 PORTCbits.RC6
#define FSR_4_WPU                  WPUCbits.WPUC6
#define FSR_4_OD                   ODCONCbits.ODCC6
#define FSR_4_ANS                  ANSELCbits.ANSC6
#define FSR_4_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define FSR_4_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define FSR_4_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define FSR_4_GetValue()           PORTCbits.RC6
#define FSR_4_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define FSR_4_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define FSR_4_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define FSR_4_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define FSR_4_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define FSR_4_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define FSR_4_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define FSR_4_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define FSR_5_TRIS                 TRISCbits.TRISC7
#define FSR_5_LAT                  LATCbits.LATC7
#define FSR_5_PORT                 PORTCbits.RC7
#define FSR_5_WPU                  WPUCbits.WPUC7
#define FSR_5_OD                   ODCONCbits.ODCC7
#define FSR_5_ANS                  ANSELCbits.ANSC7
#define FSR_5_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define FSR_5_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define FSR_5_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define FSR_5_GetValue()           PORTCbits.RC7
#define FSR_5_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define FSR_5_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define FSR_5_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define FSR_5_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define FSR_5_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define FSR_5_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define FSR_5_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define FSR_5_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/