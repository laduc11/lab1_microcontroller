/*
 * global.h
 *
 *  Created on: Oct 3, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

typedef enum state
{
    red = 1,
    yellow = 2,
    green = 3
} STATE;
typedef struct traffic_light
{
    GPIO_TypeDef *LED_RED_Port;
    GPIO_TypeDef *LED_YELLOW_Port;
    GPIO_TypeDef *LED_GREEN_Port;
    uint16_t LED_RED_Pin;
    uint16_t LED_YELLOW_Pin;
    uint16_t LED_GREEN_Pin;
    uint16_t red_time;
    uint16_t yellow_time;
    uint16_t green_time;
} TRAFFIC_LIGHT;
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define RED 5
#define YELLOW 2
#define GREEN 3


#endif /* INC_GLOBAL_H_ */
