/*
 * traffic_light.c
 *
 *  Created on: Oct 1, 2023
 *      Author: DELL
 */

#include "global.h"

void on_green(GPIO_TypeDef *GREEN_Port, uint16_t GREEN_Pin)
{
	HAL_GPIO_WritePin(GREEN_Port, GREEN_Pin, RESET);
}
void on_yellow(GPIO_TypeDef *YELLOW_Port, uint16_t YELLOW_Pin)
{
	HAL_GPIO_WritePin(YELLOW_Port, YELLOW_Pin, RESET);
}
void on_red(GPIO_TypeDef *RED_Port, uint16_t RED_Pin)
{
	HAL_GPIO_WritePin(RED_Port, RED_Pin, RESET);
}

void off_green(GPIO_TypeDef *GREEN_Port, uint16_t GREEN_Pin)
{
	HAL_GPIO_WritePin(GREEN_Port, GREEN_Pin, SET);
}
void off_yellow(GPIO_TypeDef *YELLOW_Port, uint16_t YELLOW_Pin)
{
	HAL_GPIO_WritePin(YELLOW_Port, YELLOW_Pin, SET);
}
void off_red(GPIO_TypeDef *RED_Port, uint16_t RED_Pin)
{
	HAL_GPIO_WritePin(RED_Port, RED_Pin, SET);
}

void run_state(COLOR color,
			   GPIO_TypeDef *RED_Port,
			   uint16_t RED_Pin,
			   GPIO_TypeDef *YELLOW_Port,
			   uint16_t YELLOW_Pin,
			   GPIO_TypeDef *GREEN_Port,
			   uint16_t GREEN_Pin)
{
	switch(color)
	{
	case red:
		on_red(RED_Port, RED_Pin);
		off_yellow(YELLOW_Port, YELLOW_Pin);
		off_green(GREEN_Port, GREEN_Pin);
		break;
	case yellow:
		off_red(RED_Port, RED_Pin);
		on_yellow(YELLOW_Port, YELLOW_Pin);
		off_green(GREEN_Port, GREEN_Pin);
		break;
	case green:
		off_red(RED_Port, RED_Pin);
		off_yellow(YELLOW_Port, YELLOW_Pin);
		on_green(GREEN_Port, GREEN_Pin);
		break;
	default:
		off_red(RED_Port, RED_Pin);
		off_yellow(YELLOW_Port, YELLOW_Pin);
		off_green(GREEN_Port, GREEN_Pin);
		break;
	}
}
