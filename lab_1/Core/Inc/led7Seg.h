/*
 * led7Seg.h
 *
 *  Created on: Oct 2, 2023
 *      Author: DELL
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#include "main.h"

typedef struct led7seg
{
	GPIO_TypeDef *A_Port;
    uint16_t A_Pin;
	GPIO_TypeDef *B_Port;
    uint16_t B_Pin;
	GPIO_TypeDef *C_Port;
    uint16_t C_Pin;
	GPIO_TypeDef *D_Port;
    uint16_t D_Pin;
	GPIO_TypeDef *E_Port;
    uint16_t E_Pin;
	GPIO_TypeDef *F_Port;
    uint16_t F_Pin;
	GPIO_TypeDef *G_Port;
    uint16_t G_Pin;
} LED7SEG;

void display7SEG(uint16_t num, LED7SEG led);

#endif /* INC_LED7SEG_H_ */
