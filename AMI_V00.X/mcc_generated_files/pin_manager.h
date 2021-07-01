/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F26Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSELA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set channel_ANA1 aliases
#define channel_ANA1_TRIS                 TRISAbits.TRISA1
#define channel_ANA1_LAT                  LATAbits.LATA1
#define channel_ANA1_PORT                 PORTAbits.RA1
#define channel_ANA1_WPU                  WPUAbits.WPUA1
#define channel_ANA1_OD                   ODCONAbits.ODCA1
#define channel_ANA1_ANS                  ANSELAbits.ANSELA1
#define channel_ANA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_ANA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_ANA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_ANA1_GetValue()           PORTAbits.RA1
#define channel_ANA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_ANA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_ANA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_ANA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_ANA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define channel_ANA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define channel_ANA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define channel_ANA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set channel_ANA2 aliases
#define channel_ANA2_TRIS                 TRISAbits.TRISA2
#define channel_ANA2_LAT                  LATAbits.LATA2
#define channel_ANA2_PORT                 PORTAbits.RA2
#define channel_ANA2_WPU                  WPUAbits.WPUA2
#define channel_ANA2_OD                   ODCONAbits.ODCA2
#define channel_ANA2_ANS                  ANSELAbits.ANSELA2
#define channel_ANA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define channel_ANA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define channel_ANA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define channel_ANA2_GetValue()           PORTAbits.RA2
#define channel_ANA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define channel_ANA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define channel_ANA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define channel_ANA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define channel_ANA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define channel_ANA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define channel_ANA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define channel_ANA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set channel_ANA3 aliases
#define channel_ANA3_TRIS                 TRISAbits.TRISA3
#define channel_ANA3_LAT                  LATAbits.LATA3
#define channel_ANA3_PORT                 PORTAbits.RA3
#define channel_ANA3_WPU                  WPUAbits.WPUA3
#define channel_ANA3_OD                   ODCONAbits.ODCA3
#define channel_ANA3_ANS                  ANSELAbits.ANSELA3
#define channel_ANA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define channel_ANA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define channel_ANA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define channel_ANA3_GetValue()           PORTAbits.RA3
#define channel_ANA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define channel_ANA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define channel_ANA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define channel_ANA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define channel_ANA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define channel_ANA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define channel_ANA3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define channel_ANA3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set BOTON1 aliases
#define BOTON1_TRIS                 TRISAbits.TRISA4
#define BOTON1_LAT                  LATAbits.LATA4
#define BOTON1_PORT                 PORTAbits.RA4
#define BOTON1_WPU                  WPUAbits.WPUA4
#define BOTON1_OD                   ODCONAbits.ODCA4
#define BOTON1_ANS                  ANSELAbits.ANSELA4
#define BOTON1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define BOTON1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define BOTON1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define BOTON1_GetValue()           PORTAbits.RA4
#define BOTON1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define BOTON1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define BOTON1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define BOTON1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define BOTON1_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define BOTON1_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define BOTON1_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define BOTON1_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set BOTON2 aliases
#define BOTON2_TRIS                 TRISAbits.TRISA5
#define BOTON2_LAT                  LATAbits.LATA5
#define BOTON2_PORT                 PORTAbits.RA5
#define BOTON2_WPU                  WPUAbits.WPUA5
#define BOTON2_OD                   ODCONAbits.ODCA5
#define BOTON2_ANS                  ANSELAbits.ANSELA5
#define BOTON2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BOTON2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BOTON2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BOTON2_GetValue()           PORTAbits.RA5
#define BOTON2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BOTON2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BOTON2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BOTON2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define BOTON2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define BOTON2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define BOTON2_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define BOTON2_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set BOTON4 aliases
#define BOTON4_TRIS                 TRISBbits.TRISB1
#define BOTON4_LAT                  LATBbits.LATB1
#define BOTON4_PORT                 PORTBbits.RB1
#define BOTON4_WPU                  WPUBbits.WPUB1
#define BOTON4_OD                   ODCONBbits.ODCB1
#define BOTON4_ANS                  ANSELBbits.ANSELB1
#define BOTON4_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define BOTON4_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define BOTON4_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define BOTON4_GetValue()           PORTBbits.RB1
#define BOTON4_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define BOTON4_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define BOTON4_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define BOTON4_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define BOTON4_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define BOTON4_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define BOTON4_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define BOTON4_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set BOTON3 aliases
#define BOTON3_TRIS                 TRISBbits.TRISB2
#define BOTON3_LAT                  LATBbits.LATB2
#define BOTON3_PORT                 PORTBbits.RB2
#define BOTON3_WPU                  WPUBbits.WPUB2
#define BOTON3_OD                   ODCONBbits.ODCB2
#define BOTON3_ANS                  ANSELBbits.ANSELB2
#define BOTON3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define BOTON3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define BOTON3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define BOTON3_GetValue()           PORTBbits.RB2
#define BOTON3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define BOTON3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define BOTON3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define BOTON3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define BOTON3_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define BOTON3_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define BOTON3_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define BOTON3_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set STBY aliases
#define STBY_TRIS                 TRISBbits.TRISB5
#define STBY_LAT                  LATBbits.LATB5
#define STBY_PORT                 PORTBbits.RB5
#define STBY_WPU                  WPUBbits.WPUB5
#define STBY_OD                   ODCONBbits.ODCB5
#define STBY_ANS                  ANSELBbits.ANSELB5
#define STBY_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define STBY_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define STBY_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define STBY_GetValue()           PORTBbits.RB5
#define STBY_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define STBY_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define STBY_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define STBY_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define STBY_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define STBY_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define STBY_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define STBY_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set OUT1 aliases
#define OUT1_TRIS                 TRISCbits.TRISC0
#define OUT1_LAT                  LATCbits.LATC0
#define OUT1_PORT                 PORTCbits.RC0
#define OUT1_WPU                  WPUCbits.WPUC0
#define OUT1_OD                   ODCONCbits.ODCC0
#define OUT1_ANS                  ANSELCbits.ANSELC0
#define OUT1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define OUT1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define OUT1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define OUT1_GetValue()           PORTCbits.RC0
#define OUT1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define OUT1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define OUT1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define OUT1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define OUT1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define OUT1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define OUT1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define OUT1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set OUT2 aliases
#define OUT2_TRIS                 TRISCbits.TRISC1
#define OUT2_LAT                  LATCbits.LATC1
#define OUT2_PORT                 PORTCbits.RC1
#define OUT2_WPU                  WPUCbits.WPUC1
#define OUT2_OD                   ODCONCbits.ODCC1
#define OUT2_ANS                  ANSELCbits.ANSELC1
#define OUT2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define OUT2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define OUT2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define OUT2_GetValue()           PORTCbits.RC1
#define OUT2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define OUT2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define OUT2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define OUT2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define OUT2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define OUT2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define OUT2_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define OUT2_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set OUT3 aliases
#define OUT3_TRIS                 TRISCbits.TRISC2
#define OUT3_LAT                  LATCbits.LATC2
#define OUT3_PORT                 PORTCbits.RC2
#define OUT3_WPU                  WPUCbits.WPUC2
#define OUT3_OD                   ODCONCbits.ODCC2
#define OUT3_ANS                  ANSELCbits.ANSELC2
#define OUT3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define OUT3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define OUT3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define OUT3_GetValue()           PORTCbits.RC2
#define OUT3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define OUT3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define OUT3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define OUT3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define OUT3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define OUT3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define OUT3_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define OUT3_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set OUT4 aliases
#define OUT4_TRIS                 TRISCbits.TRISC3
#define OUT4_LAT                  LATCbits.LATC3
#define OUT4_PORT                 PORTCbits.RC3
#define OUT4_WPU                  WPUCbits.WPUC3
#define OUT4_OD                   ODCONCbits.ODCC3
#define OUT4_ANS                  ANSELCbits.ANSELC3
#define OUT4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define OUT4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define OUT4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define OUT4_GetValue()           PORTCbits.RC3
#define OUT4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define OUT4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define OUT4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define OUT4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define OUT4_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define OUT4_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define OUT4_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define OUT4_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set ENT6 aliases
#define ENT6_TRIS                 TRISCbits.TRISC4
#define ENT6_LAT                  LATCbits.LATC4
#define ENT6_PORT                 PORTCbits.RC4
#define ENT6_WPU                  WPUCbits.WPUC4
#define ENT6_OD                   ODCONCbits.ODCC4
#define ENT6_ANS                  ANSELCbits.ANSELC4
#define ENT6_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define ENT6_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define ENT6_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define ENT6_GetValue()           PORTCbits.RC4
#define ENT6_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define ENT6_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define ENT6_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define ENT6_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define ENT6_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define ENT6_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define ENT6_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define ENT6_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set ENT5 aliases
#define ENT5_TRIS                 TRISCbits.TRISC5
#define ENT5_LAT                  LATCbits.LATC5
#define ENT5_PORT                 PORTCbits.RC5
#define ENT5_WPU                  WPUCbits.WPUC5
#define ENT5_OD                   ODCONCbits.ODCC5
#define ENT5_ANS                  ANSELCbits.ANSELC5
#define ENT5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define ENT5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define ENT5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define ENT5_GetValue()           PORTCbits.RC5
#define ENT5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define ENT5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define ENT5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define ENT5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define ENT5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define ENT5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define ENT5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define ENT5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

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


void BotonPressed(void);
#endif // PIN_MANAGER_H
/**
 End of File
*/