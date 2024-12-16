/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Joanellie
 * @brief          : Blinking from scratch for stm32f103c8t6 microcontroller.
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

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void delay(uint32_t cnt);						/*Dirty delay function*/

int main(void)
{
	*(uint32_t *)0x40021018 |= (1 << 4);		/*Modify Register RCC to enable CLK in PORT C*/
	*(uint32_t *)0x40011004 |= (1 << 21);		/*Modify Register GPIO_CRH to configure C13 pin as Output*/

    /* Loop forever */
	for(;;)
	{
		*(uint32_t *)0x4001100c |= (1 << 13);	/*Modify Register ODR to leave pin 13 at PORT C in High-Z*/
		delay(500000);
		*(uint32_t *)0x4001100c &= 0x0;			/*Modify Register ODR to activate N_MOS to PORT C */
		delay(500000);
	}
}

void delay(uint32_t cnt)
{
	while(cnt)
	{
		cnt --;
	}
}
