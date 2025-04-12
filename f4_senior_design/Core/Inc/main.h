/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "z_displ_ILI9XXX.h"
#include "z_touch_XPT2046.h"
#include <Math.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern TIM_HandleTypeDef htim4;
extern uint32_t value_adc;
extern float temp;
extern float hum;
extern float temp_set_point;
extern float humidity_set_point;
extern int lights_set_point;


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
#define DISPL_MOSI_Pin GPIO_PIN_1
#define DISPL_MOSI_GPIO_Port GPIOC
#define TOUCH_MISO_Pin GPIO_PIN_2
#define TOUCH_MISO_GPIO_Port GPIOC
#define DISPL_LED_Pin GPIO_PIN_6
#define DISPL_LED_GPIO_Port GPIOA
#define DISPL_DC_Pin GPIO_PIN_7
#define DISPL_DC_GPIO_Port GPIOA
#define MOISTURE_SENSOR_Pin GPIO_PIN_4
#define MOISTURE_SENSOR_GPIO_Port GPIOC
#define WATER_LEVEL_Pin GPIO_PIN_5
#define WATER_LEVEL_GPIO_Port GPIOC
#define PUMP1_EN_Pin GPIO_PIN_12
#define PUMP1_EN_GPIO_Port GPIOB
#define DISPL_SCK_Pin GPIO_PIN_13
#define DISPL_SCK_GPIO_Port GPIOB
#define HUMIDITY_EN_Pin GPIO_PIN_15
#define HUMIDITY_EN_GPIO_Port GPIOB
#define PUMP2_EN_Pin GPIO_PIN_6
#define PUMP2_EN_GPIO_Port GPIOC
#define DISPL_CS_Pin GPIO_PIN_7
#define DISPL_CS_GPIO_Port GPIOC
#define TOUCH_INT_Pin GPIO_PIN_8
#define TOUCH_INT_GPIO_Port GPIOA
#define TOUCH_INT_EXTI_IRQn EXTI9_5_IRQn
#define TOUCH_CS_Pin GPIO_PIN_9
#define TOUCH_CS_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define DISPL_RST_Pin GPIO_PIN_6
#define DISPL_RST_GPIO_Port GPIOB
#define HEATER_PWM_Pin GPIO_PIN_7
#define HEATER_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
