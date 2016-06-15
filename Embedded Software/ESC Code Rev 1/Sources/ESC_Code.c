/* ###################################################################
**     Filename    : ESC_Code.c
**     Project     : ESC_Code
**     Processor   : MKL25Z64VLH4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-04-04, 22:39, # CodeGen: 168
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ESC_Code.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ESC_Code_module ESC_Code module documentation
**  @{
*/         
/* MODULE ESC_Code */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "TPM1.h"
#include "CMP0.h"
#include "TPM2.h"
#include "ADC0.h"
#include "USB1.h"
#include "USB0.h"
#include "CDC1.h"
#include "Tx1.h"
#include "Rx1.h"
#include "CS1.h"
#include "WAIT1.h"
#include "PIT.h"
#include "PTB.h"
#include "PTD.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

#include <stdio.h>
#include "Application/Timer_App.h"





void delay(uint32_t ms)
{
	volatile uint32_t i = 0; 
	for(i=0;i<(10*ms);i++){}
}



static uint8_t cdc_buffer[USB1_DATA_BUFF_SIZE];
//static uint8_t in_buffer[USB1_DATA_BUFF_SIZE];

char Text_Buffer[30]; 

static void CDC_Run(void) 
{
    while(CDC1_App_Task(cdc_buffer, sizeof(cdc_buffer))==ERR_BUSOFF) 
    {
      // device not enumerated 
      //LED1_Neg(); LED2_Off();
      WAIT1_Waitms(10);
    }
	//sprintf(Text_Buffer,"%d", (int)((uint32_t)100000/(TPM1_MOD+1)),(int)(10+ADC0_RA*100/0xFFFF));
    sprintf(Text_Buffer,"%d,%d",(int)((uint32_t)100000/(TPM1_MOD+1)),(int)TPM1_MOD);
	CDC1_SendString((unsigned char*)Text_Buffer);
	CDC1_SendString((unsigned char*)"\r\n");
	WAIT1_Waitms(10);
 }
#define OUTPUT_EN (PORT_PCR_MUX(1) | PORT_PCR_DSE_MASK)

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  //PORTB_PCR0 |=OUTPUT_EN;
  //GPIOB_PDDR |= 0x1; 

  GPIO_Enable_All_Ports();
  ESC_Init_GPIO();
  delay(100000);
  TPM1_Init(); // HS Timer
  TPM2_CNT = 1;
  
  CMP0_Init();
  //Setup_Pin(&Extern_3_L);

  
  while(1)
  {
	  CDC_Run();
	  delay(10);
	
	  
  }

  while(1);

  
  
  
  
  
  
  
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ESC_Code */
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
