/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F18345
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANC0 aliases
#define channel_ANC0_TRIS               TRISCbits.TRISC0
#define channel_ANC0_LAT                LATCbits.LATC0
#define channel_ANC0_PORT               PORTCbits.RC0
#define channel_ANC0_WPU                WPUCbits.WPUC0
#define channel_ANC0_OD                ODCONCbits.ODCC0
#define channel_ANC0_ANS                ANSELCbits.ANSC0
#define channel_ANC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define channel_ANC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define channel_ANC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define channel_ANC0_GetValue()           PORTCbits.RC0
#define channel_ANC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define channel_ANC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define channel_ANC0_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define channel_ANC0_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define channel_ANC0_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define channel_ANC0_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define channel_ANC0_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define channel_ANC0_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set STEP3 aliases
#define STEP3_TRIS               TRISCbits.TRISC3
#define STEP3_LAT                LATCbits.LATC3
#define STEP3_PORT               PORTCbits.RC3
#define STEP3_WPU                WPUCbits.WPUC3
#define STEP3_OD                ODCONCbits.ODCC3
#define STEP3_ANS                ANSELCbits.ANSC3
#define STEP3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define STEP3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define STEP3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define STEP3_GetValue()           PORTCbits.RC3
#define STEP3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define STEP3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define STEP3_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define STEP3_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define STEP3_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define STEP3_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define STEP3_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define STEP3_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set STEP4 aliases
#define STEP4_TRIS               TRISCbits.TRISC4
#define STEP4_LAT                LATCbits.LATC4
#define STEP4_PORT               PORTCbits.RC4
#define STEP4_WPU                WPUCbits.WPUC4
#define STEP4_OD                ODCONCbits.ODCC4
#define STEP4_ANS                ANSELCbits.ANSC4
#define STEP4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define STEP4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define STEP4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define STEP4_GetValue()           PORTCbits.RC4
#define STEP4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define STEP4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define STEP4_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define STEP4_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define STEP4_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define STEP4_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define STEP4_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define STEP4_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set STEP2 aliases
#define STEP2_TRIS               TRISCbits.TRISC6
#define STEP2_LAT                LATCbits.LATC6
#define STEP2_PORT               PORTCbits.RC6
#define STEP2_WPU                WPUCbits.WPUC6
#define STEP2_OD                ODCONCbits.ODCC6
#define STEP2_ANS                ANSELCbits.ANSC6
#define STEP2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define STEP2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define STEP2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define STEP2_GetValue()           PORTCbits.RC6
#define STEP2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define STEP2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define STEP2_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define STEP2_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define STEP2_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define STEP2_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define STEP2_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define STEP2_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set STEP1 aliases
#define STEP1_TRIS               TRISCbits.TRISC7
#define STEP1_LAT                LATCbits.LATC7
#define STEP1_PORT               PORTCbits.RC7
#define STEP1_WPU                WPUCbits.WPUC7
#define STEP1_OD                ODCONCbits.ODCC7
#define STEP1_ANS                ANSELCbits.ANSC7
#define STEP1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define STEP1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define STEP1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define STEP1_GetValue()           PORTCbits.RC7
#define STEP1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define STEP1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define STEP1_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define STEP1_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define STEP1_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define STEP1_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define STEP1_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define STEP1_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/