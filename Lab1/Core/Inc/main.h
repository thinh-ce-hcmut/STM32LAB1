/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define clock_0_Pin GPIO_PIN_4
#define clock_0_GPIO_Port GPIOA
#define clock_1_Pin GPIO_PIN_5
#define clock_1_GPIO_Port GPIOA
#define clock_2_Pin GPIO_PIN_6
#define clock_2_GPIO_Port GPIOA
#define clock_3_Pin GPIO_PIN_7
#define clock_3_GPIO_Port GPIOA
#define clock_4_Pin GPIO_PIN_8
#define clock_4_GPIO_Port GPIOA
#define clock_5_Pin GPIO_PIN_9
#define clock_5_GPIO_Port GPIOA
#define clock_6_Pin GPIO_PIN_10
#define clock_6_GPIO_Port GPIOA
#define clock_7_Pin GPIO_PIN_11
#define clock_7_GPIO_Port GPIOA
#define clock_8_Pin GPIO_PIN_12
#define clock_8_GPIO_Port GPIOA
#define clock_9_Pin GPIO_PIN_13
#define clock_9_GPIO_Port GPIOA
#define clock_10_Pin GPIO_PIN_14
#define clock_10_GPIO_Port GPIOA
#define clock_11_Pin GPIO_PIN_15
#define clock_11_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
