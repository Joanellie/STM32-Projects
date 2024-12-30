################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Scr/stm32f103xx_gpio.c 

OBJS += \
./Drivers/Scr/stm32f103xx_gpio.o 

C_DEPS += \
./Drivers/Scr/stm32f103xx_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Scr/%.o Drivers/Scr/%.su Drivers/Scr/%.cyclo: ../Drivers/Scr/%.c Drivers/Scr/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"D:/Users/Joanellie/Documentos/Embedded Systems Repositories/STM32_Repository/workspace_STM32F103_DriversDesign/stm32f103xx_drivers/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Scr

clean-Drivers-2f-Scr:
	-$(RM) ./Drivers/Scr/stm32f103xx_gpio.cyclo ./Drivers/Scr/stm32f103xx_gpio.d ./Drivers/Scr/stm32f103xx_gpio.o ./Drivers/Scr/stm32f103xx_gpio.su

.PHONY: clean-Drivers-2f-Scr

