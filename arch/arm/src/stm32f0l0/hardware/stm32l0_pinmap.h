/************************************************************************************
 * arch/arm/src/stm32f0l0/hardware/stm32l0_pinmap.h
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Author: Mateusz Szafoni <raiden00@railab.me>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32F0L0_HARDWARE_STM32L0_PINMAP_H
#define __ARCH_ARM_SRC_STM32F0L0_HARDWARE_STM32L0_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "stm32_gpio.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Alternate Pin Functions.
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if
 * CAN1_RX connects vis PA11 on some board, then the following definitions should
 * appear in the board.h header file for that board:
 *
 * #define GPIO_I2C1_SCL GPIO_I2C1_SCL_1
 *
 * The driver will then automatically configre PB6 as the I2C1 SCL pin.
 */

/* WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in this file.
 */

#define GPIO_BOOT1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN2)

/* ADC
 *
 * ADC_IN16 is internal temperature sensor
 * ADC_IN17 is internal Vrefint
 */

#define GPIO_ADC1_IN0       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN0)
#define GPIO_ADC1_IN1       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN1)
#define GPIO_ADC1_IN2       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN2)
#define GPIO_ADC1_IN3       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN3)
#define GPIO_ADC1_IN4       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN4)
#define GPIO_ADC1_IN5       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN5)
#define GPIO_ADC1_IN6       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN6)
#define GPIO_ADC1_IN7       (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN7)
#define GPIO_ADC1_IN8       (GPIO_ANALOG | GPIO_PORTB | GPIO_PIN0)
#define GPIO_ADC1_IN9       (GPIO_ANALOG | GPIO_PORTB | GPIO_PIN1)
#define GPIO_ADC1_IN10      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN0)
#define GPIO_ADC1_IN11      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN1)
#define GPIO_ADC1_IN12      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN2)
#define GPIO_ADC1_IN13      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN3)
#define GPIO_ADC1_IN14      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN4)
#define GPIO_ADC1_IN15      (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN5)

/* DAC */

#define GPIO_DAC1_OUT1      (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN4)

/* I2C */

#define GPIO_I2C1_SCL_1     (GPIO_ALT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN6)
#define GPIO_I2C1_SCL_2     (GPIO_ALT | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN8)
#define GPIO_I2C1_SDA_1     (GPIO_ALT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN7)
#define GPIO_I2C1_SDA_2     (GPIO_ALT | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN9)
#define GPIO_I2C1_SMBA      (GPIO_ALT | GPIO_AF3 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN5)
#define GPIO_I2C2_SCL_1     (GPIO_ALT | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN10)
#define GPIO_I2C2_SCL_2     (GPIO_ALT | GPIO_AF5 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN13)
#define GPIO_I2C2_SDA_1     (GPIO_ALT | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN11)
#define GPIO_I2C2_SDA_2     (GPIO_ALT | GPIO_AF5 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTB | GPIO_PIN14)
#define GPIO_I2C2_SMBA      (GPIO_ALT | GPIO_AF5 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN12)
#define GPIO_I2C3_SCL       (GPIO_ALT | GPIO_AF7 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTC | GPIO_PIN0)
#define GPIO_I2C3_SDA_1     (GPIO_ALT | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTC | GPIO_PIN1)
#define GPIO_I2C3_SDA_2     (GPIO_ALT | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_OPENDRAIN | GPIO_PORTC | GPIO_PIN9)

/* LCD */

#define GPIO_LCD_COM0       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_LCD_COM1       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN9)
#define GPIO_LCD_COM2       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN10)
#define GPIO_LCD_COM3       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_LCD_COM4       (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN10)
#define GPIO_LCD_COM5       (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN11)
#define GPIO_LCD_COM6       (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_LCD_COM7       (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN2)
#define GPIO_LCD_SEG0       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_LCD_SEG1       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN2)
#define GPIO_LCD_SEG2       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN3)
#define GPIO_LCD_SEG3       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_LCD_SEG4       (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_LCD_SEG5       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_LCD_SEG6       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_LCD_SEG7       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_LCD_SEG8       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_LCD_SEG9       (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_LCD_SEG10      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_LCD_SEG11      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_LCD_SEG12      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_LCD_SEG13      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_LCD_SEG14      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_LCD_SEG15      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_LCD_SEG16      (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN8)
#define GPIO_LCD_SEG17      (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_LCD_SEG18      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN0)
#define GPIO_LCD_SEG19      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN1)
#define GPIO_LCD_SEG20      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_LCD_SEG21      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_LCD_SEG22      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN4)
#define GPIO_LCD_SEG23      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN5)
#define GPIO_LCD_SEG24      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN6)
#define GPIO_LCD_SEG25      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN7)
#define GPIO_LCD_SEG26      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN8)
#define GPIO_LCD_SEG27      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN9)
#define GPIO_LCD_SEG28      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN10)
#define GPIO_LCD_SEG29      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN11)
#define GPIO_LCD_SEG30      (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_LCD_SEG31      (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN2)

/* Clocking */

#define GPIO_MCO_1          (GPIO_ALT | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN8)
#define GPIO_MCO_2          (GPIO_ALT | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN9)
#define GPIO_OSC32_IN       (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN14)
#define GPIO_OSC32_OUT      (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN15)
#define GPIO_OSC_IN         (GPIO_ALT | GPIO_AF0 | GPIO_PORTH | GPIO_PIN0)
#define GPIO_OSC_OUT        (GPIO_ALT | GPIO_AF0 | GPIO_PORTH | GPIO_PIN1)

/* Event outputs */

#define GPIO_PA1_EVENT_OUT  (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_PA6_EVENT_OUT  (GPIO_ALT | GPIO_AF6 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_PA7_EVENT_OUT  (GPIO_ALT | GPIO_AF6 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_PA8_EVENT_OUT  (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_PA11_EVENT_OUT (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_PA12_EVENT_OUT (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_PA15_EVENT_OUT (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_PB0_EVENT_OUT  (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_PB3_EVENT_OUT  (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_PB9_EVENT_OUT  (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_PB11_EVENT_OUT (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_PB12_EVENT_OUT (GPIO_ALT | GPIO_AF6 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_PC0_EVENT_OUT  (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN0)
#define GPIO_PC1_EVENT_OUT  (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN1)
#define GPIO_PC4_EVENT_OUT  (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN4)
#define GPIO_PE0_EVENT_OUT  (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN0)
#define GPIO_PE1_EVENT_OUT  (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN1)

/* RTC */

#define GPIO_RTC_OUT        (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_RTC_REFIN      (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_RTC_TAMP1      (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN13)
#define GPIO_RTC_TS         (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN13)

/* SPI */

#define GPIO_SPI1_MISO_1    (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_SPI1_MISO_2    (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_SPI1_MISO_3    (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_SPI1_MISO_4    (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN14)
#define GPIO_SPI1_MOSI_1    (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_SPI1_MOSI_2    (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_SPI1_MOSI_3    (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_SPI1_MOSI_4    (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN15)
#define GPIO_SPI1_NSS_1     (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_SPI1_NSS_2     (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_SPI1_NSS_3     (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN12)
#define GPIO_SPI1_SCK_1     (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_SPI1_SCK_2     (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_SPI1_SCK_3     (GPIO_ALT | GPIO_AF2 | GPIO_PORTE | GPIO_PIN13)
#define GPIO_SPI2_MISO_1    (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_SPI2_MISO_2    (GPIO_ALT | GPIO_AF2 | GPIO_PORTD | GPIO_PIN3)
#define GPIO_SPI2_MISO_3    (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_SPI2_MOSI_1    (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_SPI2_MOSI_2    (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN4)
#define GPIO_SPI2_MOSI_3    (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_SPI2_NSS_1     (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_SPI2_NSS_2     (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN0)
#define GPIO_SPI2_NSS_3     (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_SPI2_SCK_1     (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_SPI2_SCK_2     (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN1)
#define GPIO_SPI2_SCK_3     (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN13)

/* Timers */

#define GPIO_TIM2_CH1_ETR_1 (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN0)
#define GPIO_TIM2_CH1_ETR_2 (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN15)
#define GPIO_TIM2_CH1_ETR_3 (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN9)
#define GPIO_TIM2_CH1_ETR_4 (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN5)
#define GPIO_TIM2_CH2IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM2_CH2IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TIM2_CH2IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN10)
#define GPIO_TIM2_CH2IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM2_CH2IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TIM2_CH2IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN10)
#define GPIO_TIM2_CH2OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM2_CH2OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TIM2_CH2OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN10)
#define GPIO_TIM2_CH2OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM2_CH2OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TIM2_CH2OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN10)
#define GPIO_TIM2_CH3IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM2_CH3IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TIM2_CH3IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN11)
#define GPIO_TIM2_CH3IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM2_CH3IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TIM2_CH3IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN11)
#define GPIO_TIM2_CH3OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM2_CH3OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TIM2_CH3OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN11)
#define GPIO_TIM2_CH3OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM2_CH3OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TIM2_CH3OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN11)
#define GPIO_TIM2_CH4IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN3)
#define GPIO_TIM2_CH4IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN11)
#define GPIO_TIM2_CH4IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN12)
#define GPIO_TIM2_CH4OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN3)
#define GPIO_TIM2_CH4OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN11)
#define GPIO_TIM2_CH4OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF1 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN12)

#define GPIO_TIM3_CH1IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TIM3_CH1IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN4)
#define GPIO_TIM3_CH1IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN6)
#define GPIO_TIM3_CH1IN_4   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN3)
#define GPIO_TIM3_CH1OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TIM3_CH1OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN4)
#define GPIO_TIM3_CH1OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN6)
#define GPIO_TIM3_CH1OUT_4  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN3)
#define GPIO_TIM3_CH2IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TIM3_CH2IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN5)
#define GPIO_TIM3_CH2IN_3   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN7)
#define GPIO_TIM3_CH2IN_4   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN4)
#define GPIO_TIM3_CH2OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TIM3_CH2OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN5)
#define GPIO_TIM3_CH2OUT_3  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN7)
#define GPIO_TIM3_CH2OUT_4  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN4)
#define GPIO_TIM3_CH3IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN0)
#define GPIO_TIM3_CH3IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN8)
#define GPIO_TIM3_CH3OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN0)
#define GPIO_TIM3_CH3OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN8)
#define GPIO_TIM3_CH4IN_1   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TIM3_CH4IN_2   (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN9)
#define GPIO_TIM3_CH4OUT_1  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TIM3_CH4OUT_2  (GPIO_ALT | GPIO_PUSHPULL | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTC | GPIO_PIN9)
#define GPIO_TIM3_ETR_1     (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTD | GPIO_PIN2)
#define GPIO_TIM3_ETR_2     (GPIO_ALT | GPIO_FLOAT | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PORTE | GPIO_PIN2)

/* TODO: TIM21, TIM22 */

/* USART */

#define GPIO_USART1_CK_1    (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_USART1_CK_2    (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_USART1_CTS_1   (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_USART1_CTS_2   (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_USART1_RTS_1   (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_USART1_RTS_2   (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_USART1_RX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN10)
#define GPIO_USART1_RX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN7)
#define GPIO_USART1_TX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN9)
#define GPIO_USART1_TX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN6)

#define GPIO_USART2_CK_1    (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_USART2_CK_2    (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN7)
#define GPIO_USART2_CTS_1   (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN0)
#define GPIO_USART2_CTS_2   (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN3)
#define GPIO_USART2_RTS_1   (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_USART2_RTS_2   (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN4)
#define GPIO_USART2_RX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN3)
#define GPIO_USART2_RX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTD | GPIO_PIN6)
#define GPIO_USART2_RX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN15)
#define GPIO_USART2_TX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN2)
#define GPIO_USART2_TX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF0 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTD | GPIO_PIN5)
#define GPIO_USART2_TX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF4 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN14)

#define GPIO_USART4_CK      (GPIO_ALT | GPIO_AF6 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_USART4_RTS     (GPIO_ALT | GPIO_AF6 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_USART4_CTS     (GPIO_ALT | GPIO_AF6 | GPIO_PORTB | GPIO_PIN7)
#define GPIO_USART4_RX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTC | GPIO_PIN11)
#define GPIO_USART4_RX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTE | GPIO_PIN9)
#define GPIO_USART4_RX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN1)
#define GPIO_USART4_TX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTC | GPIO_PIN10)
#define GPIO_USART4_TX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTE | GPIO_PIN8)
#define GPIO_USART4_TX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTA | GPIO_PIN0)

#define GPIO_USART5_CK_1    (GPIO_ALT | GPIO_AF6 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_USART5_CK_2    (GPIO_ALT | GPIO_AF6 | GPIO_PORTE | GPIO_PIN7)
#define GPIO_USART5_RTS_1   (GPIO_ALT | GPIO_AF6 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_USART5_RTS_2   (GPIO_ALT | GPIO_AF6 | GPIO_PORTE | GPIO_PIN7)
#define GPIO_USART5_RX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTD | GPIO_PIN2)
#define GPIO_USART5_RX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTE | GPIO_PIN11)
#define GPIO_USART5_RX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN3)
#define GPIO_USART5_TX_1    (GPIO_ALT | GPIO_PULLUP | GPIO_AF2 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTC | GPIO_PIN12)
#define GPIO_USART5_TX_2    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTE | GPIO_PIN10)
#define GPIO_USART5_TX_3    (GPIO_ALT | GPIO_PULLUP | GPIO_AF6 | GPIO_SPEED_HIGH | GPIO_PUSHPULL | GPIO_PORTB | GPIO_PIN4)

/* TODO: USB */

/* TODO: LPTIM */

/* TODO: LPUART */

#endif /* __ARCH_ARM_SRC_STM32F0L0_HARDWARE_STM32L0_PINMAP_H */
