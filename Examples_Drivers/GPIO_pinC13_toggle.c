/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stm32f103xx.h>
#include "stm32f103xx_gpio.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void delay(uint32_t time);

int main(void)
{
	/*Blinking Manually using GPIO API*/
	GPIO_Output_Init(GPIOC, GPIO_PIN_13, GPIO_OUTPUT_MODE_2MHZ, GPIO_OUT_GP_OPEN_DRAIN);

	while(1){
		GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		delay(500000);
	}
}

void delay(uint32_t time){
	while(time){
		time --;
	}
}
