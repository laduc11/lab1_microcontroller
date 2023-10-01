/*
 * traffic_light.c
 *
 *  Created on: Oct 1, 2023
 *      Author: DELL
 */

#include "global.h"

void init_light()
{
	run_state(red);
}
void on_green()
{
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}
void on_yellow()
{
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}
void on_red()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
}
void off_green()
{
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void off_yellow()
{
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void off_red()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
}

void run_state(COLOR color)
{
	switch(color)
	{
	case red:
		on_red();
		off_yellow();
		off_green();
		break;
	case yellow:
		off_red();
		on_yellow();
		off_green();
		break;
	case green:
		off_red();
		off_yellow();
		on_green();
		break;
	default:
		off_red();
		off_yellow();
		off_green();
		break;
	}
}
