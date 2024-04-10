/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FMC_UDQM_Pin GPIO_PIN_1
#define FMC_UDQM_GPIO_Port GPIOE
#define FMC_LDQM_Pin GPIO_PIN_0
#define FMC_LDQM_GPIO_Port GPIOE
#define U5TX_Pin GPIO_PIN_12
#define U5TX_GPIO_Port GPIOC
#define SWDCLK_Pin GPIO_PIN_14
#define SWDCLK_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define QSPI_CS_Pin GPIO_PIN_6
#define QSPI_CS_GPIO_Port GPIOB
#define FMC_CAS_Pin GPIO_PIN_15
#define FMC_CAS_GPIO_Port GPIOG
#define FMC_D2_Pin GPIO_PIN_0
#define FMC_D2_GPIO_Port GPIOD
#define LED0_Pin GPIO_PIN_11
#define LED0_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_10
#define LED1_GPIO_Port GPIOC
#define U4TX_Pin GPIO_PIN_12
#define U4TX_GPIO_Port GPIOA
#define FMC_D3_Pin GPIO_PIN_1
#define FMC_D3_GPIO_Port GPIOD
#define U4RX_Pin GPIO_PIN_11
#define U4RX_GPIO_Port GPIOA
#define U5RX_Pin GPIO_PIN_2
#define U5RX_GPIO_Port GPIOD
#define HPLC_EVENT_Pin GPIO_PIN_10
#define HPLC_EVENT_GPIO_Port GPIOA
#define FMC_A0_Pin GPIO_PIN_0
#define FMC_A0_GPIO_Port GPIOF
#define HPLC_STA_Pin GPIO_PIN_9
#define HPLC_STA_GPIO_Port GPIOA
#define FMC_CS_Pin GPIO_PIN_3
#define FMC_CS_GPIO_Port GPIOH
#define FMC_A2_Pin GPIO_PIN_2
#define FMC_A2_GPIO_Port GPIOF
#define FMC_A1_Pin GPIO_PIN_1
#define FMC_A1_GPIO_Port GPIOF
#define FMC_CLK_Pin GPIO_PIN_8
#define FMC_CLK_GPIO_Port GPIOG
#define FMC_A3_Pin GPIO_PIN_3
#define FMC_A3_GPIO_Port GPIOF
#define FMC_A4_Pin GPIO_PIN_4
#define FMC_A4_GPIO_Port GPIOF
#define QSPI_IO2_Pin GPIO_PIN_7
#define QSPI_IO2_GPIO_Port GPIOF
#define QSPI_IO3_Pin GPIO_PIN_6
#define QSPI_IO3_GPIO_Port GPIOF
#define FMC_A5_Pin GPIO_PIN_5
#define FMC_A5_GPIO_Port GPIOF
#define FMC_BS1_Pin GPIO_PIN_5
#define FMC_BS1_GPIO_Port GPIOG
#define FMC_BA0_Pin GPIO_PIN_4
#define FMC_BA0_GPIO_Port GPIOG
#define QSPI_IO1_Pin GPIO_PIN_9
#define QSPI_IO1_GPIO_Port GPIOF
#define QSPI_IO0_Pin GPIO_PIN_8
#define QSPI_IO0_GPIO_Port GPIOF
#define FMC_D1_Pin GPIO_PIN_15
#define FMC_D1_GPIO_Port GPIOD
#define FMC_A12_Pin GPIO_PIN_2
#define FMC_A12_GPIO_Port GPIOG
#define FMC_WE_Pin GPIO_PIN_0
#define FMC_WE_GPIO_Port GPIOC
#define FMC_CKE_Pin GPIO_PIN_3
#define FMC_CKE_GPIO_Port GPIOC
#define QSPI_CLK_Pin GPIO_PIN_2
#define QSPI_CLK_GPIO_Port GPIOB
#define FMC_A11_Pin GPIO_PIN_1
#define FMC_A11_GPIO_Port GPIOG
#define FMC_D0_Pin GPIO_PIN_14
#define FMC_D0_GPIO_Port GPIOD
#define LCDBK_Pin GPIO_PIN_13
#define LCDBK_GPIO_Port GPIOD
#define FMC_A7_Pin GPIO_PIN_13
#define FMC_A7_GPIO_Port GPIOF
#define FMC_A10_Pin GPIO_PIN_0
#define FMC_A10_GPIO_Port GPIOG
#define FMC_D10_Pin GPIO_PIN_13
#define FMC_D10_GPIO_Port GPIOE
#define FMC_D15_Pin GPIO_PIN_10
#define FMC_D15_GPIO_Port GPIOD
#define SPI6_MISO_Pin GPIO_PIN_6
#define SPI6_MISO_GPIO_Port GPIOA
#define SPI6_CLK_Pin GPIO_PIN_5
#define SPI6_CLK_GPIO_Port GPIOA
#define FMC_A6_Pin GPIO_PIN_12
#define FMC_A6_GPIO_Port GPIOF
#define FMC_A9_Pin GPIO_PIN_15
#define FMC_A9_GPIO_Port GPIOF
#define FMC_D5_Pin GPIO_PIN_8
#define FMC_D5_GPIO_Port GPIOE
#define FMC_D6_Pin GPIO_PIN_9
#define FMC_D6_GPIO_Port GPIOE
#define FMC_D8_Pin GPIO_PIN_11
#define FMC_D8_GPIO_Port GPIOE
#define FMC_D11_Pin GPIO_PIN_14
#define FMC_D11_GPIO_Port GPIOE
#define FMC_D14_Pin GPIO_PIN_9
#define FMC_D14_GPIO_Port GPIOD
#define FMC_D13_Pin GPIO_PIN_8
#define FMC_D13_GPIO_Port GPIOD
#define SPI6_MOSI_Pin GPIO_PIN_7
#define SPI6_MOSI_GPIO_Port GPIOA
#define TEST_Pin GPIO_PIN_0
#define TEST_GPIO_Port GPIOB
#define FMC_RAS_Pin GPIO_PIN_11
#define FMC_RAS_GPIO_Port GPIOF
#define FMC_A8_Pin GPIO_PIN_14
#define FMC_A8_GPIO_Port GPIOF
#define FMC_D4_Pin GPIO_PIN_7
#define FMC_D4_GPIO_Port GPIOE
#define FMC_D7_Pin GPIO_PIN_10
#define FMC_D7_GPIO_Port GPIOE
#define FMC_D9_Pin GPIO_PIN_12
#define FMC_D9_GPIO_Port GPIOE
#define FMC_D12_Pin GPIO_PIN_15
#define FMC_D12_GPIO_Port GPIOE
#define U3TXD_Pin GPIO_PIN_10
#define U3TXD_GPIO_Port GPIOB
#define U3RXD_Pin GPIO_PIN_11
#define U3RXD_GPIO_Port GPIOB
#define HPLC_RST_Pin GPIO_PIN_14
#define HPLC_RST_GPIO_Port GPIOB
#define HPLC_SET_Pin GPIO_PIN_15
#define HPLC_SET_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
