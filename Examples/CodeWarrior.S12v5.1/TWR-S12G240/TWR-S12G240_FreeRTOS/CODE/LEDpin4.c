/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : LEDpin4.c
**     Project   : TWR_S12G240_FreeRTOS
**     Processor : MC9S12G240CLL
**     Component : BitIO
**     Version   : Component 02.075, Driver 03.16, CPU db: 3.00.010
**     Compiler  : CodeWarrior HC12 C Compiler
**     Date/Time : 04.09.2018, 20:29
**     Abstract  :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings  :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       39            |  PT7_IOC7
**             ----------------------------------------------------
**
**         Port name                   : T
**
**         Bit number (in port)        : 7
**         Bit mask of the port        : $0080
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0
**         Initial pull option         : off
**
**         Port data register          : PTT       [$0240]
**         Port control register       : DDRT      [$0242]
**
**         Optimization for            : speed
**     Contents  :
**         GetVal - bool LEDpin4_GetVal(void);
**         ClrVal - void LEDpin4_ClrVal(void);
**         SetVal - void LEDpin4_SetVal(void);
**         NegVal - void LEDpin4_NegVal(void);
**
**     Copyright : 1997 - 2011 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE LEDpin4. */

#include "LEDpin4.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

#pragma DATA_SEG LEDpin4_DATA          /* Select data segment "LEDpin4_DATA" */
#pragma CODE_SEG LEDpin4_CODE
#pragma CONST_SEG LEDpin4_CONST        /* Constant section for this module */
/*
** ===================================================================
**     Method      :  LEDpin4_GetVal (component BitIO)
**
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
/*
bool LEDpin4_GetVal(void)

**  This method is implemented as a macro. See LEDpin4.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDpin4_ClrVal (component BitIO)
**
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDpin4_ClrVal(void)

**  This method is implemented as a macro. See LEDpin4.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDpin4_SetVal (component BitIO)
**
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDpin4_SetVal(void)

**  This method is implemented as a macro. See LEDpin4.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDpin4_NegVal (component BitIO)
**
**     Description :
**         This method negates (inverts) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDpin4_NegVal(void)

**  This method is implemented as a macro. See LEDpin4.h file.  **
*/


/* END LEDpin4. */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.03 [04.46]
**     for the Freescale HCS12 series of microcontrollers.
**
** ###################################################################
*/
