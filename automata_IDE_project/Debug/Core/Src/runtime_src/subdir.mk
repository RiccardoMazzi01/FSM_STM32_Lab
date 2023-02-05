################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/runtime_src/liquidcrystal_i2c.c \
../Core/Src/runtime_src/runtime.c 

OBJS += \
./Core/Src/runtime_src/liquidcrystal_i2c.o \
./Core/Src/runtime_src/runtime.o 

C_DEPS += \
./Core/Src/runtime_src/liquidcrystal_i2c.d \
./Core/Src/runtime_src/runtime.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/runtime_src/%.o Core/Src/runtime_src/%.su: ../Core/Src/runtime_src/%.c Core/Src/runtime_src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-runtime_src

clean-Core-2f-Src-2f-runtime_src:
	-$(RM) ./Core/Src/runtime_src/liquidcrystal_i2c.d ./Core/Src/runtime_src/liquidcrystal_i2c.o ./Core/Src/runtime_src/liquidcrystal_i2c.su ./Core/Src/runtime_src/runtime.d ./Core/Src/runtime_src/runtime.o ./Core/Src/runtime_src/runtime.su

.PHONY: clean-Core-2f-Src-2f-runtime_src

