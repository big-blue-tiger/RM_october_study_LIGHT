
#include "main.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_tim.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
    HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);

}

//
// Created by 28672 on 2024/10/2.
//
