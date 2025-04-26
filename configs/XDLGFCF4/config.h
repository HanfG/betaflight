/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define FC_TARGET_MCU     AT32F435M

#define BOARD_NAME        XDLGFCF4
#define MANUFACTURER_ID   HANF

#define DEFAULT_MIXER     MIXER_CUSTOM

#define MAX_SUPPORTED_SERVOS 8

#define USE_SERIALRX
#define USE_ACC
#define USE_ACC_SPI_ICM20602
#define USE_GYRO
#define USE_GYRO_SPI_ICM20602
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_TIMER_MGMT

#define USE_SDCARD
#define USE_USB_MSC


#define BEEPER_PIN           PA8
#define BEEPER_PWM_HZ        3800

#define SERVO1_PIN           PB12  // AF2  TMR5_CH1
#define SERVO2_PIN           PB11  // AF2  TMR5_CH4
#define SERVO3_PIN           PB10  // AF1  TMR2_CH3
#define SERVO4_PIN           PB2   // AF1  TMR2_CH4
#define SERVO5_PIN           PB9   // AF2  TMR4_CH4
#define SERVO6_PIN           PB8   // AF1  TMR2_CH1
#define SERVO7_PIN           PB7   // AF2  TMR4_CH2
#define SERVO8_PIN           PB6   // AF2  TMR4_CH1

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP(0,  PB12,  1,  0) \
    TIMER_PIN_MAP(1,  PB11,  2,  -1) \
    TIMER_PIN_MAP(2,  PB10,  1,  -1) \
    TIMER_PIN_MAP(3,  PB2,   1,  -1) \
    TIMER_PIN_MAP(4,  PB9,   2,  -1) \
    TIMER_PIN_MAP(5,  PB8,   1,  -1) \
    TIMER_PIN_MAP(6,  PB7,   1,  -1) \
    TIMER_PIN_MAP(7,  PB6,   1,  -1) \
    TIMER_PIN_MAP(8,  PB1,   2,  -1) \
    TIMER_PIN_MAP(9,  PA8,   1,  -1)

#define LED0_PIN             PC13
#define LED1_PIN             PC14
#define LED2_PIN             PC15

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10
#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3
#define UART4_TX_PIN         PH3
#define UART4_RX_PIN         PH2

#define I2C3_SCL_PIN         PB15
#define I2C3_SDA_PIN         PB14

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PB5

#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE  SPI3
#define SDCARD_SPI_CS_PIN    PA15

#define GYRO_1_EXTI_PIN      PB0
#define GYRO_1_CS_PIN        PA4
#define GYRO_1_FSYNC_PIN     PB1 // AF2 TMR3_CH4
#define GYRO_1_SPI_INSTANCE  SPI1


#define ADC_VBAT_PIN         PA0
#define ADC_EXTERNAL1_PIN    PA1

#define ADC1_DMA_OPT                   0
#define ADC_INSTANCE                   ADC1

#define BARO_I2C_INSTANCE              I2CDEV_3

#define SERIALRX_UART                  SERIAL_PORT_USART1
#define GPS_UART                       SERIAL_PORT_USART2

#define DEFAULT_BLACKBOX_DEVICE          BLACKBOX_DEVICE_SDCARD
#define DEFAULT_VOLTAGE_METER_SOURCE     VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE      43

