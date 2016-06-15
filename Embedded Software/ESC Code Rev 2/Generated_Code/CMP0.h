/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : CMP0.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z64VLK4
**     Component   : Init_HSCMP
**     Version     : Component 01.007, Driver 01.07, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-09-29, 23:22, # CodeGen: 56
**     Abstract    :
**          This file implements the HSCMP (CMP0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : CMP0
**          Device                                         : CMP0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Sample                                       : Disabled
**            Windowing                                    : Disabled
**            Filter sample count                          : 7
**            Filter sample period                         : 200
**            Sampling period                              : 8.333 us
**            Invert control                               : Do NOT invert
**            MUX pass through                             : Disabled
**            Comparator output select                     : Filtered
**            Power mode                                   : High speed
**            Hysteresis control                           : Level 0
**            Trigger mode for DAC                         : Disabled
**          Pins/Signals                                   : 
**            Positive input pins                          : Enabled
**              Positive input pin0                        : Enabled
**                Positive input pin0                      : CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/SPI0_MISO
**                Positive input pin0 signal               : 
**              Positive input pin1                        : Enabled
**                Positive input pin1                      : CMP0_IN1/PTC7/SPI0_MISO/SPI0_MOSI
**                Positive input pin1 signal               : 
**              Positive input pin2                        : Disabled
**              Positive input pin3                        : Disabled
**              Positive input pin4                        : Enabled
**                Positive input pin4                      : DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1
**                Positive input pin4 signal               : 
**              Positive input pin5                        : Disabled
**              Positive input pin6                        : Disabled
**              Positive input pin7                        : Disabled
**            Negative input pins                          : Enabled
**              Negative input pin0                        : Disabled
**              Negative input pin1                        : Disabled
**              Negative input pin2                        : Disabled
**              Negative input pin3                        : Disabled
**              Negative input pin4                        : Disabled
**              Negative input pin5                        : Enabled
**                Negative input pin5                      : CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0
**                Negative input pin5 signal               : 
**              Negative input pin6                        : Disabled
**              Negative input pin7                        : Disabled
**            Window/Sample input                          : Disabled
**            Output pin                                   : Disabled
**          Interrupts/DMA                                 : 
**            Rising or Falling compare                    : 
**              Interrupt                                  : INT_CMP0
**              Interrupt request                          : Enabled
**              Interrupt priority                         : 0 (Highest)
**              ISR name                                   : INT_CMP2
**              Rising compare interrupt                   : Enabled
**              Falling compare interrupt                  : Enabled
**              DMA request                                : Disabled
**          Initialization                                 : 
**            Comparator module                            : Enabled
**            Initial positive input                       : P0
**            Initial negative input                       : M5
**            Call Init method                             : no
**     Contents    :
**         Init - void CMP0_Init(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file CMP0.h
** @version 01.07
** @brief
**          This file implements the HSCMP (CMP0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup CMP0_module CMP0 module documentation
**  @{
*/         

#ifndef CMP0_H_
#define CMP0_H_

/* MODULE CMP0. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define CMP0_DEVICE CMP0_BASE_PTR


/*
** ===================================================================
**     Method      :  CMP0_Init (component Init_HSCMP)
**     Description :
**         This method initializes registers of the HSCMP module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void CMP0_Init(void);
/*
** ===================================================================
** The interrupt service routine must be implemented by user in one
** of the user modules (see CMP0.c file for more information).
** ===================================================================
*/
PE_ISR(INT_CMP2);


/* END CMP0. */
#endif /* #ifndef __CMP0_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
