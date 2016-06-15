/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Rx1.c
**     Project     : MarqDroneMK22FN
**     Processor   : MK22FN512VLH12
**     Component   : RingBuffer
**     Version     : Component 01.039, Driver 01.00, CPU db: 3.00.000
**     Repository  : My Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-01-16, 17:02, # CodeGen: 1
**     Abstract    :
**         This component implements a ring buffer for different integer data type.
**     Settings    :
**          Component name                                 : Rx1
**          Reentrant                                      : yes
**          Critical Section                               : CS1
**          Buffer Size                                    : 64
**          Element Size                                   : 1 Byte
**     Contents    :
**         Clear           - void Rx1_Clear(void);
**         Put             - uint8_t Rx1_Put(Rx1_ElementType elem);
**         Get             - uint8_t Rx1_Get(Rx1_ElementType *elemP);
**         Peek            - uint8_t Rx1_Peek(Rx1_BufSizeType index, Rx1_ElementType *elemP);
**         NofElements     - Rx1_BufSizeType Rx1_NofElements(void);
**         NofFreeElements - Rx1_BufSizeType Rx1_NofFreeElements(void);
**         Deinit          - void Rx1_Deinit(void);
**         Init            - void Rx1_Init(void);
**
**     License   :  Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2014, all rights reserved.
**     Web: http://www.mcuoneclipse.com
**     This an open source software of an embedded component for Processor Expert.
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file Rx1.c
** @version 01.00
** @brief
**         This component implements a ring buffer for different integer data type.
*/         
/*!
**  @addtogroup Rx1_module Rx1 module documentation
**  @{
*/         

/* MODULE Rx1. */

#include "Rx1.h"

#if Rx1_IS_REENTRANT
  #define Rx1_DEFINE_CRITICAL() CS1_CriticalVariable()
  #define Rx1_ENTER_CRITICAL()  CS1_EnterCritical()
  #define Rx1_EXIT_CRITICAL()   CS1_ExitCritical()
#else
  #define Rx1_DEFINE_CRITICAL() /* nothing */
  #define Rx1_ENTER_CRITICAL()  /* nothing */
  #define Rx1_EXIT_CRITICAL()   /* nothing */
#endif
static Rx1_ElementType Rx1_buffer[Rx1_BUF_SIZE]; /* ring buffer */
static Rx1_BufSizeType Rx1_inIdx;  /* input index */
static Rx1_BufSizeType Rx1_outIdx; /* output index */
static Rx1_BufSizeType Rx1_inSize; /* size data in buffer */
/*
** ===================================================================
**     Method      :  Rx1_Put (component RingBuffer)
**     Description :
**         Puts a new element into the buffer
**     Parameters  :
**         NAME            - DESCRIPTION
**         elem            - New element to be put into the buffer
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint8_t Rx1_Put(Rx1_ElementType elem)
{
  uint8_t res = ERR_OK;
  Rx1_DEFINE_CRITICAL();

  Rx1_ENTER_CRITICAL();
  if (Rx1_inSize==Rx1_BUF_SIZE) {
    res = ERR_TXFULL;
  } else {
    Rx1_buffer[Rx1_inIdx] = elem;
    Rx1_inIdx++;
    if (Rx1_inIdx==Rx1_BUF_SIZE) {
      Rx1_inIdx = 0;
    }
    Rx1_inSize++;
  }
  Rx1_EXIT_CRITICAL();
  return res;
}

/*
** ===================================================================
**     Method      :  Rx1_Get (component RingBuffer)
**     Description :
**         Removes an element from the buffer
**     Parameters  :
**         NAME            - DESCRIPTION
**       * elemP           - Pointer to where to store the received
**                           element
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint8_t Rx1_Get(Rx1_ElementType *elemP)
{
  uint8_t res = ERR_OK;
  Rx1_DEFINE_CRITICAL();

  Rx1_ENTER_CRITICAL();
  if (Rx1_inSize==0) {
    res = ERR_RXEMPTY;
  } else {
    *elemP = Rx1_buffer[Rx1_outIdx];
    Rx1_inSize--;
    Rx1_outIdx++;
    if (Rx1_outIdx==Rx1_BUF_SIZE) {
      Rx1_outIdx = 0;
    }
  }
  Rx1_EXIT_CRITICAL();
  return res;
}

/*
** ===================================================================
**     Method      :  Rx1_NofElements (component RingBuffer)
**     Description :
**         Returns the actual number of elements in the buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Number of elements in the buffer.
** ===================================================================
*/
Rx1_BufSizeType Rx1_NofElements(void)
{
  return Rx1_inSize;
}

/*
** ===================================================================
**     Method      :  Rx1_NofFreeElements (component RingBuffer)
**     Description :
**         Returns the actual number of free elements/space in the
**         buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Number of elements in the buffer.
** ===================================================================
*/
Rx1_BufSizeType Rx1_NofFreeElements(void)
{
  return (Rx1_BufSizeType)(Rx1_BUF_SIZE-Rx1_inSize);
}

/*
** ===================================================================
**     Method      :  Rx1_Init (component RingBuffer)
**     Description :
**         Initializes the data structure
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Rx1_Init(void)
{
  Rx1_inIdx = 0;
  Rx1_outIdx = 0;
  Rx1_inSize = 0;
}

/*
** ===================================================================
**     Method      :  Rx1_Clear (component RingBuffer)
**     Description :
**         Clear (empty) the ring buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Rx1_Clear(void)
{
  Rx1_DEFINE_CRITICAL();

  Rx1_ENTER_CRITICAL();
  Rx1_Init();
  Rx1_EXIT_CRITICAL();
}

/*
** ===================================================================
**     Method      :  Rx1_Peek (component RingBuffer)
**     Description :
**         Returns an element of the buffer without removiing it.
**     Parameters  :
**         NAME            - DESCRIPTION
**         index           - Index of element. 0 peeks the top
**                           element, 1 the next, and so on.
**       * elemP           - Pointer to where to store the received
**                           element
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint8_t Rx1_Peek(Rx1_BufSizeType index, Rx1_ElementType *elemP)
{
  uint8_t res = ERR_OK;
  int idx; /* index inside ring buffer */
  Rx1_DEFINE_CRITICAL();

  Rx1_ENTER_CRITICAL();
  if (index>=Rx1_BUF_SIZE) {
    res = ERR_OVERFLOW; /* asking for an element outside of ring buffer size */
  } else if (index<Rx1_inSize) {
    idx = (Rx1_outIdx+index)%Rx1_BUF_SIZE;
    *elemP = Rx1_buffer[idx];
  } else { /* asking for an element which does not exist */
    res = ERR_RXEMPTY;
  }
  Rx1_EXIT_CRITICAL();
  return res;
}

/*
** ===================================================================
**     Method      :  Rx1_Deinit (component RingBuffer)
**     Description :
**         Driver de-initialization
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/**
void Rx1_Deinit(void)
{
  ** Function is implemented as macro in the header file
}
*/
/* END Rx1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
