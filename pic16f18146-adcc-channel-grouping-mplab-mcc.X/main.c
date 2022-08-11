 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"

#define ADCTMD_ADERR_LESS_THAN_ADLTH (0b001)
#define ADCTMD_ADERR_GREATHER_THAN_ADUTH (0b110)

void ADCC_UserInterruptHandler(void);
void Timer0_UserInterruptHandler(void);
inline void LED0_ON(void);
inline void LED0_OFF(void);
inline void ALARM_ON(void);
inline void ALARM_OFF(void);

volatile bool isADCThresholdInterruptOccured = false;
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    
    //Channel Grouping is being initialized here as support is not yet available in MCC
    ADCG1A = 0b00000000; 
    ADCG1B = 0b01010000; //RB4, RB6
    ADCG1C = 0b11000100; //RC2, RC6, RC7
    
    ADCC_SetADTIInterruptHandler(ADCC_UserInterruptHandler);
    Timer0.TimeoutCallbackRegister(Timer0_UserInterruptHandler);

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 
    
    //clear idle enable bit so that MCU will go to sleep mode when SLEEP instruction is executed
    CPUDOZEbits.IDLEN = 0;

    //All ADC channels connected to FSRs are combined to form a channel group
    ADCC_StartConversion(channel_ADCG1);
    
    while (1)
    {
        if (isADCThresholdInterruptOccured)
        {
            isADCThresholdInterruptOccured = false;
               
            if (ADCC_HasErrorCrossedUpperThreshold())
            {
                //Some one at door. FSR is being pressed.

                LED0_ON(); 
                 
                ALARM_ON();   
                Timer0.Start();
                 
                //Configure ADC to Interrupt if ADERR < ADLTH. 
                //Interrupt will occur if FSR is released.
                ADCON3bits.TMD = ADCTMD_ADERR_LESS_THAN_ADLTH;                 
            }
            
            if (ADCC_HasErrorCrossedLowerThreshold())
            {
                //No one at door. FSR is not being pressed.
                
                LED0_OFF();
                
                //Configure ADC to Interrupt if ADERR > ADUTH. 
                //Interrupt will occur if FSR is pressed.
                ADCON3bits.TMD = ADCTMD_ADERR_GREATHER_THAN_ADUTH;                                            
            }
         
            //ADC conversion was stopped due to threshold interrupt
            ADCC_StartConversion(channel_ADCG1);
        }
        
        SLEEP();
        NOP();
    }
}

inline void LED0_ON(void)
{
    LED_D6_SetHigh();
}

inline void LED0_OFF(void)
{
    LED_D6_SetLow();
}

inline void ALARM_ON(void)
{
    PWM1_16BIT_Enable();
}

inline void ALARM_OFF(void)
{
    PWM1_16BIT_Disable();
}

void ADCC_UserInterruptHandler(void)
{
    //check if threshold interrupt is occurred due to Accumulator overflow
    if (ADCC_HasAccumulatorOverflowed())
    {
        //Clear accumulator will clear accumulator overflow bit
        ADCC_ClearAccumulator();
        
        //ADC conversion was stopped due to threshold interrupt
        ADCC_StartConversion(channel_ADCG1);
    }
    else
    {
        isADCThresholdInterruptOccured = true;
    }
}

void Timer0_UserInterruptHandler(void)
{
    Timer0.Stop();
    ALARM_OFF();
}