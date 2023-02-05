################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/FSM_Src/FSM.c 

OBJS += \
./Core/Src/FSM_Src/FSM.o 

C_DEPS += \
./Core/Src/FSM_Src/FSM.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/FSM_Src/%.o Core/Src/FSM_Src/%.su: ../Core/Src/FSM_Src/%.c Core/Src/FSM_Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-FSM_Src

clean-Core-2f-Src-2f-FSM_Src:
	-$(RM) ./Core/Src/FSM_Src/FSM.d ./Core/Src/FSM_Src/FSM.o ./Core/Src/FSM_Src/FSM.su

.PHONY: clean-Core-2f-Src-2f-FSM_Src

