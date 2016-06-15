/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : TPM2.h
**     Project     : ESC_Code
**     Processor   : MKL25Z64VLH4
**     Component   : Init_TPM
**     Version     : Component 01.000, Driver 01.00, CPU db: 3.00.000
**     Compiler    : CodeWarrior ARM C Compiler
**     Date/Time   : 2015-09-24, 00:43, # CodeGen: 220
**     Abstract    :
**          This file implements the TPM (TPM2) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : TPM2
**          Device                                         : TPM2
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Clock source                               : TPM counter clock
**              Prescaler                                  : divide by 16
**              Modulo counter                             : 65000
**              Period                                     : 21.667 ms
**            BDM mode                                     : TPM counter stopped; output pins remain the same
**            Global time base                             : Disabled
**            Counter reload on trigger                    : Disabled
**            Counter start on trigger                     : Disabled
**            Counter stop on overflow                     : Disabled
**          Channels                                       : 
**            Channel 0                                    : Disabled
**            Channel 1                                    : Disabled
**          Pins                                           : 
**            External clock pin                           : Disabled
**            HW Synchronization trigger                   : Disabled
**          Interrupts                                     : 
**            Channels / Timer overflow / Fault            : 
**              Interrupt                                  : INT_TPM2
**              Interrupt request                          : Enabled
**              Interrupt priority                         : 2
**              ISR Name                                   : TPM2_ISR
**              Channels interrupt/DMA                     : See the respective Channel settings
**              Timer overflow DMA                         : Disabled
**              Timer overflow interrupt                   : Enabled
**          Initialization                                 : 
**            Call Init method                             : yes
**     Contents    :
**         Init - void TPM2_Init(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file TPM2.h
** @version 01.00
** @brief
**          This file implements the TPM (TPM2) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup TPM2_module TPM2 module documentation
**  @{
*/         

#ifndef TPM2_H_
#define TPM2_H_

/* MODULE TPM2. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define TPM2_DEVICE TPM2_BASE_PTR


/*
** ===================================================================
**     Method      :  TPM2_Init (component Init_TPM)
**     Description :
**         This method initializes registers of the TPM module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TPM2_Init(void);
/*
** ===================================================================
** The interrupt service routine must be implemented by user in one
** of the user modules (see TPM2.c file for more information).
** ===================================================================
*/
PE_ISR(TPM2_ISR);


/* END TPM2. */
#endif /* #ifndef __TPM2_H_ */
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
