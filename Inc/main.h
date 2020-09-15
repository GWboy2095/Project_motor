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
#include "stm32f0xx_hal.h"

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
#define Motor_1_Pin GPIO_PIN_0
#define Motor_1_GPIO_Port GPIOA
#define FAN_Pin GPIO_PIN_1
#define FAN_GPIO_Port GPIOA
#define Motor_2_Pin GPIO_PIN_2
#define Motor_2_GPIO_Port GPIOA
#define Buzzer_Pin GPIO_PIN_3
#define Buzzer_GPIO_Port GPIOA
#define DIG_G_Pin GPIO_PIN_4
#define DIG_G_GPIO_Port GPIOA
#define DIG_C_Pin GPIO_PIN_5
#define DIG_C_GPIO_Port GPIOA
#define DIG_DP_Pin GPIO_PIN_6
#define DIG_DP_GPIO_Port GPIOA
#define DIG_D_Pin GPIO_PIN_7
#define DIG_D_GPIO_Port GPIOA
#define DIG_E_Pin GPIO_PIN_0
#define DIG_E_GPIO_Port GPIOB
#define Key_PowerOn_Pin GPIO_PIN_1
#define Key_PowerOn_GPIO_Port GPIOB
#define Key_PowerOn_EXTI_IRQn EXTI0_1_IRQn
#define Key_Function_Pin GPIO_PIN_2
#define Key_Function_GPIO_Port GPIOB
#define Key_Function_EXTI_IRQn EXTI2_3_IRQn
#define Key_Timing_Pin GPIO_PIN_10
#define Key_Timing_GPIO_Port GPIOB
#define Key_Timing_EXTI_IRQn EXTI4_15_IRQn
#define Key_Auto_Pin GPIO_PIN_11
#define Key_Auto_GPIO_Port GPIOB
#define Key_Auto_EXTI_IRQn EXTI4_15_IRQn
#define Key_Plus_Pin GPIO_PIN_12
#define Key_Plus_GPIO_Port GPIOB
#define Key_Plus_EXTI_IRQn EXTI4_15_IRQn
#define Key_Less_Pin GPIO_PIN_13
#define Key_Less_GPIO_Port GPIOB
#define Key_Less_EXTI_IRQn EXTI4_15_IRQn
#define DIG1_Pin GPIO_PIN_4
#define DIG1_GPIO_Port GPIOB
#define DIG_A_Pin GPIO_PIN_5
#define DIG_A_GPIO_Port GPIOB
#define DIG_F_Pin GPIO_PIN_6
#define DIG_F_GPIO_Port GPIOB
#define DIG2_Pin GPIO_PIN_7
#define DIG2_GPIO_Port GPIOB
#define DIG3_Pin GPIO_PIN_8
#define DIG3_GPIO_Port GPIOB
#define DIG_B_Pin GPIO_PIN_9
#define DIG_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
