/*
 * led7Seg.c
 *
 *  Created on: Oct 2, 2023
 *      Author: DELL
 */

#include "led7Seg.h"

void display7SEG(uint16_t num, LED7SEG led)
{
	switch (num)
	{
	case 0:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		on_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		off_red(led.G_Port, led.G_Pin);
		break;
	case 1:
		off_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		off_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		off_red(led.F_Port, led.F_Pin);
		off_red(led.G_Port, led.G_Pin);
		break;
	case 2:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		off_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		on_red(led.E_Port, led.E_Pin);
		off_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 3:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		off_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 4:
		off_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		off_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 5:
		on_red(led.A_Port, led.A_Pin);
		off_red(led.B_Port, led.B_Pin);
		off_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 6:
		on_red(led.A_Port, led.A_Pin);
		off_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		on_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 7:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		off_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		off_red(led.F_Port, led.F_Pin);
		off_red(led.G_Port, led.G_Pin);
		break;
	case 8:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		on_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	case 9:
		on_red(led.A_Port, led.A_Pin);
		on_red(led.B_Port, led.B_Pin);
		on_red(led.C_Port, led.C_Pin);
		on_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		on_red(led.F_Port, led.F_Pin);
		on_red(led.G_Port, led.G_Pin);
		break;
	default:
		off_red(led.A_Port, led.A_Pin);
		off_red(led.B_Port, led.B_Pin);
		off_red(led.C_Port, led.C_Pin);
		off_red(led.D_Port, led.D_Pin);
		off_red(led.E_Port, led.E_Pin);
		off_red(led.F_Port, led.F_Pin);
		off_red(led.G_Port, led.G_Pin);
		break;
	}
}
