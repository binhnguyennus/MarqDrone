/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : USB0_Config.h
**     Project     : MarqDroneMK22FN
**     Processor   : MK22FN512VLH12
**     Component   : Init_USB_OTG
**     Version     : Component 01.004, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-01-16, 17:34, # CodeGen: 3
**     Abstract    :
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : USB0
**          Device                                         : USB0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              IRC48 clock setting                        : 
**                IRC48M module                            : Disabled
**                IRC48M regulator                         : Enabled
**                IRC48M clock recovery                    : Disabled
**                IRC48M Reset/resume to rough phase       : Disabled
**                Restart from IFR trim value              : Disabled
**              Clock divider                              : 
**                Clock divider source                     : PLL/FLL clock
**                Clock divider input frequency            : 120 MHz
**                Clock divider fraction                   : multiply by 2
**                Clock divider divisor                    : divide by 5
**              Module clock source                        : Clock divider output
**              Module clock frequency                     : 48 MHz
**            Pull-up/pull-down settings                   : 
**              Weak pulldowns                             : Enabled
**              Pull-up/pull-down control                  : Mode dependent
**              D+ pull-up                                 : Disabled
**              D+ pull-down                               : Disabled
**              D- pull-down                               : Disabled
**              D+ pull-up for non-OTG mode                : Disabled
**            Endpoints                                    : 
**              EP0                                        : Disabled
**                Direct low speed                         : Disabled
**                Retry                                    : Enabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP1                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP2                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP3                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP4                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP5                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP6                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP7                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP8                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP9                                        : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP10                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP11                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP12                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP13                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP14                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**              EP15                                       : Disabled
**                Setup transfers                          : Enabled
**                Handshake                                : Disabled
**                Rx transfer                              : Disabled
**                Tx transfer                              : Disabled
**                Force stall                              : Disabled
**            Buffer descriptor table                      : 
**              External object declaration                : extern uint8_t g_Mem[];
**              Address                                    : ((uint32_t)&g_Mem[0])
**            SOF threshold                                : 0
**          Pins                                           : 
**            Alternate clock source                       : Disabled
**            SOF output                                   : Disabled
**            Data plus                                    : Enabled
**              Pin                                        : <Automatic>
**            Data minus                                   : Enabled
**              Pin                                        : <Automatic>
**          Interrupts                                     : 
**            USB                                          : 
**              Interrupt                                  : INT_USB0
**              Interrupt request                          : Disabled
**              Interrupt priority                         : default
**              ISR Name                                   : USB_ISR
**              Stall                                      : Enabled
**              Attach                                     : Enabled
**              Resume                                     : Enabled
**              Sleep                                      : Enabled
**              Token OK                                   : Enabled
**              Start of frame                             : Enabled
**              Error interrupt                            : Enabled
**              USB reset                                  : Enabled
**              Asynchronous Resume interrupt              : Enabled
**              Error interrupts                           : 
**                Bit stuff error                          : Disabled
**                DMA error                                : Disabled
**                Bus turnaround timeout                   : Disabled
**                Data length error                        : Disabled
**                CRC16 error                              : Disabled
**                CRC5 or EOF                              : Disabled
**                PID error                                : Disabled
**              OTG interrupts                             : 
**                ID pin changed                           : Disabled
**                1 ms interrupt                           : Disabled
**                Line stage change                        : Disabled
**                Session valid                            : Disabled
**                "B" session end                          : Disabled
**                "A" bus valid                            : Disabled
**          Initialization                                 : 
**            Mode                                         : Device
**            USB transceiver suspend state                : Enabled
**            Call Init method                             : yes
**            Utilize after reset values                   : default
**     Contents    :
**         Init - void USB0_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file USB0_Config.h                                                  
** @version 01.04
** @brief
**          This file implements the USB_OTG (USB0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup USB0_Config_module USB0_Config module documentation
**  @{
*/         

#ifndef USB0_Config_H_
#define USB0_Config_H_

/* MODULE USB0. */

extern uint8_t g_Mem[];
/* USB0_CTL: ODDRST=1 */
#define USB0_CTL_VALUE_1     0x02U
#define USB0_CTL_MASK_1      0x02U
/* USB0_CLK_RECOVER_IRC_EN: IRC_EN=0,REG_EN=1 */
#define USB0_CLK_RECOVER_IRC_EN_VALUE 0x01U
#define USB0_CLK_RECOVER_IRC_EN_MASK 0x03U
/* USB0_CLK_RECOVER_CTRL: CLOCK_RECOVER_EN=0,RESET_RESUME_ROUGH_EN=0,RESTART_IFRTRIM_EN=0 */
#define USB0_CLK_RECOVER_CTRL_VALUE 0x00U
#define USB0_CLK_RECOVER_CTRL_MASK 0xE0U
/* USB0_USBCTRL: SUSP=1,PDE=1,??=0,??=0,??=0,??=0,??=0,??=0 */
#define USB0_USBCTRL_VALUE   0xC0U
/* USB0_OTGISTAT: IDCHG=1,ONEMSEC=1,LINE_STATE_CHG=1,??=1,SESSVLDCHG=1,B_SESS_CHG=1,??=1,AVBUSCHG=1 */
#define USB0_OTGISTAT_VALUE  0xFFU
/* USB0_ISTAT: STALL=1,ATTACH=1,RESUME=1,SLEEP=1,TOKDNE=1,SOFTOK=1,ERROR=1,USBRST=1 */
#define USB0_ISTAT_VALUE     0xFFU
/* USB0_ERRSTAT: BTSERR=1,??=1,DMAERR=1,BTOERR=1,DFN8=1,CRC16=1,CRC5EOF=1,PIDERR=1 */
#define USB0_ERRSTAT_VALUE   0xFFU
/* USB0_INTEN: STALLEN=1,ATTACHEN=1,RESUMEEN=1,SLEEPEN=1,TOKDNEEN=1,SOFTOKEN=1,ERROREN=1,USBRSTEN=1 */
#define USB0_INTEN_VALUE     0xFFU
/* USB0_ERREN: BTSERREN=0,??=0,DMAERREN=0,BTOERREN=0,DFN8EN=0,CRC16EN=0,CRC5EOFEN=0,PIDERREN=0 */
#define USB0_ERREN_VALUE     0x00U
/* USB0_USBTRC0: USBRESET=0,??=1,USBRESMEN=1,??=0,??=0,USB_CLK_RECOVERY_INT=0,SYNC_DET=0,USB_RESUME_INT=0 */
#define USB0_USBTRC0_VALUE   0x60U
/* USB0_OTGICR: IDEN=0,ONEMSECEN=0,LINESTATEEN=0,??=0,SESSVLDEN=0,BSESSEN=0,??=0,AVBUSEN=0 */
#define USB0_OTGICR_VALUE    0x00U
/* USB0_ENDPT0: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT0_VALUE    0x00U
/* USB0_ENDPT1: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT1_VALUE    0x00U
/* USB0_ENDPT2: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT2_VALUE    0x00U
/* USB0_ENDPT3: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT3_VALUE    0x00U
/* USB0_ENDPT4: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT4_VALUE    0x00U
/* USB0_ENDPT5: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT5_VALUE    0x00U
/* USB0_ENDPT6: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT6_VALUE    0x00U
/* USB0_ENDPT7: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT7_VALUE    0x00U
/* USB0_ENDPT8: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT8_VALUE    0x00U
/* USB0_ENDPT9: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT9_VALUE    0x00U
/* USB0_ENDPT10: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT10_VALUE   0x00U
/* USB0_ENDPT11: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT11_VALUE   0x00U
/* USB0_ENDPT12: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT12_VALUE   0x00U
/* USB0_ENDPT13: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT13_VALUE   0x00U
/* USB0_ENDPT14: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT14_VALUE   0x00U
/* USB0_ENDPT15: HOSTWOHUB=0,RETRYDIS=0,??=0,EPCTLDIS=0,EPRXEN=0,EPTXEN=0,EPSTALL=0,EPHSHK=0 */
#define USB0_ENDPT15_VALUE   0x00U
#define USB0_BDTPAGE1_VALUE  (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x08) & 0xFEU)
#define USB0_BDTPAGE2_VALUE  (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x10) & 0xFFU)
#define USB0_BDTPAGE3_VALUE  (uint8_t)((((uint32_t)((uint32_t)&g_Mem[0])) >> 0x18) & 0xFFU)
/* USB0_SOFTHLD: CNT=0 */
#define USB0_SOFTHLD_VALUE   0x00U
/* USB0_OTGCTL: DPHIGH=0,??=0,DPLOW=0,DMLOW=0,??=0,OTGEN=0,??=0,??=0 */
#define USB0_OTGCTL_VALUE    0x00U
/* USB0_CONTROL: ??=0,??=0,??=0,DPPULLUPNONOTG=0,??=0,??=0,??=0,??=0 */
#define USB0_CONTROL_VALUE   0x00U
/* USB0_CTL: TXSUSPENDTOKENBUSY=0,HOSTMODEEN=0,ODDRST=0,USBENSOFEN=1 */
#define USB0_CTL_VALUE_2     0x01U
#define USB0_CTL_MASK_2      0x2BU

#define USB0_AUTOINIT

#define INT_USB0_ISR USB_ISR

/* END USB0. */
#endif /* #ifndef __USB0_Config_H_ */
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
