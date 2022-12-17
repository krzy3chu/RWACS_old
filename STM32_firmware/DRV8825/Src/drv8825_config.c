/**
  ******************************************************************************
  * @file		: drv8825_config.c
  * @author  	: Krzysztof Witkowski
  * @date    	: Dec 17, 2022
  * @brief   	: DRV8825 step motor driver configuration source code file
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

#include "drv8825_config.h"

/* Public variables ----------------------------------------------------------*/

DRV8825_HandleTypeDef hdrv8825_1 = {
  .Tim = &htim2,
  .TimChannel = TIM_CHANNEL_1,
  .Speed = 0,
  .DirPort = DDRV8825_DIR_GPIO_Port,
  .DirPin = DDRV8825_DIR_Pin
};
