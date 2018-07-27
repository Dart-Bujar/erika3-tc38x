/* ###*B*###
 * Erika Enterprise, version 3
 * 
 * Copyright (C) 2018 Evidence s.r.l.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License, version 2, for more details.
 * 
 * You should have received a copy of the GNU General Public License,
 * version 2, along with this program; if not, see
 * < www.gnu.org/licenses/old-licenses/gpl-2.0.html >.
 * 
 * This program is distributed to you subject to the following
 * clarifications and special exceptions to the GNU General Public
 * License, version 2.
 * 
 * THIRD PARTIES' MATERIALS
 * 
 * Certain materials included in this library are provided by third
 * parties under licenses other than the GNU General Public License. You
 * may only use, copy, link to, modify and redistribute this library
 * following the terms of license indicated below for third parties'
 * materials.
 * 
 * In case you make modified versions of this library which still include
 * said third parties' materials, you are obligated to grant this special
 * exception.
 * 
 * The complete list of Third party materials allowed with ERIKA
 * Enterprise version 3, together with the terms and conditions of each
 * license, is present in the file THIRDPARTY.TXT in the root of the
 * project.
 * ###*E*### */

/** @file	ee_dspic33ev_ic.h
 *  @brief	Microchip dsPIC33EV MCU Interrupt Controller Driver Interface.
 *  @author	Giuseppe Serano
 *  @date	2018
 */ 

#ifndef	OSEE_DSPIC33EV_IC_H
#define	OSEE_DSPIC33EV_IC_H

#include "ee_mcu_irq.h"

#if (defined(__cplusplus))
extern "C" {
#endif

/*
 * ISRs Clear.
 */

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OSCFAIL_ISR_CLR ( void ) { INTCON1bits.OSCFAIL = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ADDRERR_ISR_CLR ( void ) { INTCON1bits.ADDRERR = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SGHT_ISR_CLR    ( void ) { INTCON2bits.SWTRAP = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_STKERR_ISR_CLR  ( void ) { INTCON1bits.STKERR = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_MATHERR_ISR_CLR ( void ) { INTCON1bits.MATHERR = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMACERR_ISR_CLR ( void ) { INTCON1bits.DMACERR = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT0_ISR_CLR    ( void ) { IFS0bits.INT0IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC1_ISR_CLR     ( void ) { IFS0bits.IC1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC1_ISR_CLR     ( void ) { IFS0bits.OC1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T1_ISR_CLR      ( void ) { IFS0bits.T1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA0_ISR_CLR    ( void ) { IFS0bits.DMA0IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC2_ISR_CLR     ( void ) { IFS0bits.IC2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC2_ISR_CLR     ( void ) { IFS0bits.OC2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T2_ISR_CLR      ( void ) { IFS0bits.T2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T3_ISR_CLR      ( void ) { IFS0bits.T3IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1E_ISR_CLR   ( void ) { IFS0bits.SPI1EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1_ISR_CLR    ( void ) { IFS0bits.SPI1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1RX_ISR_CLR    ( void ) { IFS0bits.U1RXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1TX_ISR_CLR    ( void ) { IFS0bits.U1TXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_AD1_ISR_CLR     ( void ) { IFS0bits.AD1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA1_ISR_CLR    ( void ) { IFS0bits.DMA1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_NVM_ISR_CLR     ( void ) { IFS0bits.NVMIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SI2C1_ISR_CLR   ( void ) { IFS1bits.SI2C1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_MI2C1_ISR_CLR   ( void ) { IFS1bits.MI2C1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CMP1_ISR_CLR    ( void ) { IFS1bits.CMIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CN_ISR_CLR      ( void ) { IFS1bits.CNIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT1_ISR_CLR    ( void ) { IFS1bits.INT1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA2_ISR_CLR    ( void ) { IFS1bits.DMA2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC3_ISR_CLR     ( void ) { IFS1bits.OC3IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC4_ISR_CLR     ( void ) { IFS1bits.OC4IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T4_ISR_CLR      ( void ) { IFS1bits.T4IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T5_ISR_CLR      ( void ) { IFS1bits.T5IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT2_ISR_CLR    ( void ) { IFS1bits.INT2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2RX_ISR_CLR    ( void ) { IFS1bits.U2RXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2TX_ISR_CLR    ( void ) { IFS1bits.U2TXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2E_ISR_CLR   ( void ) { IFS2bits.SPI2EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2_ISR_CLR    ( void ) { IFS2bits.SPI2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1RX_ISR_CLR    ( void ) { IFS2bits.C1RXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1_ISR_CLR      ( void ) { IFS2bits.C1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA3_ISR_CLR    ( void ) { IFS2bits.DMA3IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC3_ISR_CLR     ( void ) { IFS2bits.IC3IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC4_ISR_CLR     ( void ) { IFS2bits.IC4IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PSEM_ISR_CLR    ( void ) { IFS3bits.PSEMIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1E_ISR_CLR     ( void ) { IFS4bits.U1EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2E_ISR_CLR     ( void ) { IFS4bits.U2EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1TX_ISR_CLR    ( void ) { IFS4bits.C1TXIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CTMU_ISR_CLR    ( void ) { IFS4bits.CTMUIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM1_ISR_CLR    ( void ) { IFS5bits.PWM1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM2_ISR_CLR    ( void ) { IFS5bits.PWM2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM3_ISR_CLR    ( void ) { IFS6bits.PWM3IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ICD_ISR_CLR     ( void ) { IFS8bits.ICDIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_I2C1_ISR_CLR    ( void ) { IFS10bits.I2C1BCIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1ERR_ISR_CLR( void ) { IFS11bits.SENT1EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1_ISR_CLR   ( void ) { IFS11bits.SENT1IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2ERR_ISR_CLR( void ) { IFS11bits.SENT2EIF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2_ISR_CLR   ( void ) { IFS11bits.SENT2IF = 0U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ECCSBE_ISR_CLR  ( void ) { IFS11bits.ECCSBEIF = 0U; }

/*
 * ISRs Enable.
 */

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT0_ISR_EN    ( void ) { IEC0bits.INT0IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC1_ISR_EN     ( void ) { IEC0bits.IC1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC1_ISR_EN     ( void ) { IEC0bits.OC1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T1_ISR_EN      ( void ) { IEC0bits.T1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA0_ISR_EN    ( void ) { IEC0bits.DMA0IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC2_ISR_EN     ( void ) { IEC0bits.IC2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC2_ISR_EN     ( void ) { IEC0bits.OC2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T2_ISR_EN      ( void ) { IEC0bits.T2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T3_ISR_EN      ( void ) { IEC0bits.T3IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1E_ISR_EN   ( void ) { IEC0bits.SPI1EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1_ISR_EN    ( void ) { IEC0bits.SPI1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1RX_ISR_EN    ( void ) { IEC0bits.U1RXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1TX_ISR_EN    ( void ) { IEC0bits.U1TXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_AD1_ISR_EN     ( void ) { IEC0bits.AD1IE = 1U; }
    
OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA1_ISR_EN    ( void ) { IEC0bits.DMA1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_NVM_ISR_EN     ( void ) { IEC0bits.NVMIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SI2C1_ISR_EN   ( void ) { IEC1bits.SI2C1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_MI2C1_ISR_EN   ( void ) { IEC1bits.MI2C1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CMP1_ISR_EN    ( void ) { IEC1bits.CMIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CN_ISR_EN      ( void ) { IEC1bits.CNIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT1_ISR_EN    ( void ) { IEC1bits.INT1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA2_ISR_EN    ( void ) { IEC1bits.DMA2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC3_ISR_EN     ( void ) { IEC1bits.OC3IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC4_ISR_EN     ( void ) { IEC1bits.OC4IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T4_ISR_EN      ( void ) { IEC1bits.T4IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T5_ISR_EN      ( void ) { IEC1bits.T5IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT2_ISR_EN    ( void ) { IEC1bits.INT2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2RX_ISR_EN    ( void ) { IEC1bits.U2RXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2TX_ISR_EN    ( void ) { IEC1bits.U2TXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2E_ISR_EN   ( void ) { IEC2bits.SPI2EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2_ISR_EN    ( void ) { IEC2bits.SPI2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1RX_ISR_EN    ( void ) { IEC2bits.C1RXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1_ISR_EN      ( void ) { IEC2bits.C1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA3_ISR_EN    ( void ) { IEC2bits.DMA3IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC3_ISR_EN     ( void ) { IEC2bits.IC3IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC4_ISR_EN     ( void ) { IEC2bits.IC4IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PSEM_ISR_EN    ( void ) { IEC3bits.PSEMIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1E_ISR_EN     ( void ) { IEC4bits.U1EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2E_ISR_EN     ( void ) { IEC4bits.U2EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1TX_ISR_EN    ( void ) { IEC4bits.C1TXIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CTMU_ISR_EN    ( void ) { IEC4bits.CTMUIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM1_ISR_EN    ( void ) { IEC5bits.PWM1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM2_ISR_EN    ( void ) { IEC5bits.PWM2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM3_ISR_EN    ( void ) { IEC6bits.PWM3IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ICD_ISR_EN     ( void ) { IEC8bits.ICDIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_I2C1_ISR_EN    ( void ) { IEC10bits.I2C1BCIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1ERR_ISR_EN( void ) { IEC11bits.SENT1EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1_ISR_EN   ( void ) { IEC11bits.SENT1IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2ERR_ISR_EN( void ) { IEC11bits.SENT2EIE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2_ISR_EN   ( void ) { IEC11bits.SENT2IE = 1U; }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ECCSBE_ISR_EN  ( void ) { IEC11bits.ECCSBEIE = 1U; }

/*
 * ISRs Set Priority.
 */

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT0_ISR_SET_PRIO    (uint8_t prio) { IPC0bits.INT0IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC1_ISR_SET_PRIO     (uint8_t prio) { IPC0bits.IC1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC1_ISR_SET_PRIO     (uint8_t prio) { IPC0bits.OC1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T1_ISR_SET_PRIO      (uint8_t prio) { IPC0bits.T1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA0_ISR_SET_PRIO    (uint8_t prio) { IPC1bits.DMA0IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC2_ISR_SET_PRIO     (uint8_t prio) { IPC1bits.IC2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC2_ISR_SET_PRIO     (uint8_t prio) { IPC1bits.OC2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T2_ISR_SET_PRIO      (uint8_t prio) { IPC1bits.T2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T3_ISR_SET_PRIO      (uint8_t prio) { IPC2bits.T3IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1E_ISR_SET_PRIO   (uint8_t prio) { IPC2bits.SPI1EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI1_ISR_SET_PRIO    (uint8_t prio) { IPC2bits.SPI1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1RX_ISR_SET_PRIO    (uint8_t prio) { IPC2bits.U1RXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1TX_ISR_SET_PRIO    (uint8_t prio) { IPC3bits.U1TXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_AD1_ISR_SET_PRIO     (uint8_t prio) { IPC3bits.AD1IP = (prio); }
    
OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA1_ISR_SET_PRIO    (uint8_t prio) { IPC3bits.DMA1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_NVM_ISR_SET_PRIO     (uint8_t prio) { IPC3bits.NVMIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SI2C1_ISR_SET_PRIO   (uint8_t prio) { IPC4bits.SI2C1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_MI2C1_ISR_SET_PRIO   (uint8_t prio) { IPC4bits.MI2C1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CMP1_ISR_SET_PRIO    (uint8_t prio) { IPC4bits.CMIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CN_ISR_SET_PRIO      (uint8_t prio) { IPC4bits.CNIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT1_ISR_SET_PRIO    (uint8_t prio) { IPC5bits.INT1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA2_ISR_SET_PRIO    (uint8_t prio) { IPC6bits.DMA2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC3_ISR_SET_PRIO     (uint8_t prio) { IPC6bits.OC3IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_OC4_ISR_SET_PRIO     (uint8_t prio) { IPC6bits.OC4IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T4_ISR_SET_PRIO      (uint8_t prio) { IPC6bits.T4IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_T5_ISR_SET_PRIO      (uint8_t prio) { IPC7bits.T5IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_INT2_ISR_SET_PRIO    (uint8_t prio) { IPC7bits.INT2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2RX_ISR_SET_PRIO    (uint8_t prio) { IPC7bits.U2RXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2TX_ISR_SET_PRIO    (uint8_t prio) { IPC7bits.U2TXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2E_ISR_SET_PRIO   (uint8_t prio) { IPC8bits.SPI2EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SPI2_ISR_SET_PRIO    (uint8_t prio) { IPC8bits.SPI2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1RX_ISR_SET_PRIO    (uint8_t prio) { IPC8bits.C1RXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1_ISR_SET_PRIO      (uint8_t prio) { IPC8bits.C1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_DMA3_ISR_SET_PRIO    (uint8_t prio) { IPC9bits.DMA3IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC3_ISR_SET_PRIO     (uint8_t prio) { IPC9bits.IC3IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_IC4_ISR_SET_PRIO     (uint8_t prio) { IPC9bits.IC4IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PSEM_ISR_SET_PRIO    (uint8_t prio) { IPC14bits.PSEMIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U1E_ISR_SET_PRIO     (uint8_t prio) { IPC16bits.U1EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_U2E_ISR_SET_PRIO     (uint8_t prio) { IPC16bits.U2EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_C1TX_ISR_SET_PRIO    (uint8_t prio) { IPC17bits.C1TXIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_CTMU_ISR_SET_PRIO    (uint8_t prio) { IPC19bits.CTMUIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM1_ISR_SET_PRIO    (uint8_t prio) { IPC23bits.PWM1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM2_ISR_SET_PRIO    (uint8_t prio) { IPC23bits.PWM2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_PWM3_ISR_SET_PRIO    (uint8_t prio) { IPC24bits.PWM3IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ICD_ISR_SET_PRIO     (uint8_t prio) { IPC35bits.ICDIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_I2C1_ISR_SET_PRIO    (uint8_t prio) { IPC43bits.I2C1BCIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1ERR_ISR_SET_PRIO(uint8_t prio) { IPC45bits.SENT1EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT1_ISR_SET_PRIO   (uint8_t prio) { IPC45bits.SENT1IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2ERR_ISR_SET_PRIO(uint8_t prio) { IPC46bits.SENT2EIP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_SENT2_ISR_SET_PRIO   (uint8_t prio) { IPC46bits.SENT2IP = (prio); }

OSEE_STATIC_INLINE FUNC(void, OS_CODE) OSEE_ALWAYS_INLINE
OSEE_DSPIC33_PIC24_ECCSBE_ISR_SET_PRIO  (uint8_t prio) { IPC46bits.ECCSBEIP = (prio); }

#if	defined(OSEE_API_DYNAMIC)

FUNC(void, OS_CODE) osEE_dspic33_pic24_ic_set_int_src(
  VAR(OsEE_isr_src_id, AUTOMATIC)	src,
  VAR(OsEE_reg, AUTOMATIC)		prio,
  VAR(OsEE_bool, AUTOMATIC)		en
);

#if	0	/* [GS]: Not used for now! */

FUNC(void, OS_CODE) osEE_dspic33_pic24_ic_clr_int_src(
  VAR(OsEE_isr_src_id, AUTOMATIC)	src
);

#endif	/* 0 - [GS]: Not used for now! */

#endif	/* !OSEE_API_DYNAMIC */

#if (defined(__cplusplus))
}
#endif

#endif	/* OSEE_DSPIC33EV_IC_H */
