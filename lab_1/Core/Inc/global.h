/*
 * global.h
 *
 *  Created on: Oct 1, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "led7Seg.h"

#define RED 5
#define YELLOW 2
#define GREEN 3

typedef enum color
{
	red = 1,
	yellow = 2,
	green = 3
} COLOR;

void on_green(GPIO_TypeDef *GREEN_Port, uint16_t GREEN_Pin);
void on_yellow(GPIO_TypeDef *YELLOW_Port, uint16_t YELLOW_Pin);
void on_red(GPIO_TypeDef *RED_Port, uint16_t RED_Pin);

void off_green(GPIO_TypeDef *GREEN_Port, uint16_t GREEN_Pin);
void off_yellow(GPIO_TypeDef *YELLOW_Port, uint16_t YELLOW_Pin);
void off_red(GPIO_TypeDef *RED_Port, uint16_t RED_Pin);

void run_state(COLOR color,
			   GPIO_TypeDef *RED_Port,
			   uint16_t RED_Pin,
			   GPIO_TypeDef *YELLOW_Port,
			   uint16_t YELLOW_Pin,
			   GPIO_TypeDef *GREEN_Port,
			   uint16_t GREEN_Pin);

#endif /* INC_GLOBAL_H_ */
