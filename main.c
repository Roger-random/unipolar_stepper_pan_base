/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC16F18345
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

static uint16_t currentPin = 0;
static uint16_t currentPinDwell = 0;

static uint8_t pinPatterns[] = {
    0b00000001,
    0b00000011,
    0b00000010,
    0b00000110,
    0b00000100,
    0b00001100,
    0b00001000,
    0b00001001,
};

void patternToPins(uint8_t pattern)
{
    if (pattern & 0b0001)
    {
        STEP1_SetHigh();
    }
    else
    {
        STEP1_SetLow();
    }

    if (pattern & 0b0010)
    {
        STEP2_SetHigh();
    }
    else
    {
        STEP2_SetLow();
    }

    if (pattern & 0b0100)
    {
        STEP3_SetHigh();
    }
    else
    {
        STEP3_SetLow();
    }

    if (pattern & 0b1000)
    {
        STEP4_SetHigh();
    }
    else
    {
        STEP4_SetLow();
    }
}

void pinCountISR(void)
{
    if (currentPinDwell < 100)
    {
        currentPinDwell++;
    }
    else
    {
        currentPinDwell = 0;

        currentPin++;
        if (currentPin > 7)
        {
            currentPin = 0;
        }
    }

    patternToPins(pinPatterns[currentPin]);
}

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    TMR0_SetInterruptHandler(pinCountISR);
    
    while (1)
    {
        // Add your application code
    }
}
/**
 End of File
*/