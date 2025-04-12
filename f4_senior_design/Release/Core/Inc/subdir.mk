################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/font12.c \
../Core/Inc/font16.c \
../Core/Inc/font20.c \
../Core/Inc/font24.c \
../Core/Inc/font8.c 

C_DEPS += \
./Core/Inc/font12.d \
./Core/Inc/font16.d \
./Core/Inc/font20.d \
./Core/Inc/font24.d \
./Core/Inc/font8.d 

OBJS += \
./Core/Inc/font12.o \
./Core/Inc/font16.o \
./Core/Inc/font20.o \
./Core/Inc/font24.o \
./Core/Inc/font8.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/%.o Core/Inc/%.su Core/Inc/%.cyclo: ../Core/Inc/%.c Core/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Inc

clean-Core-2f-Inc:
	-$(RM) ./Core/Inc/font12.cyclo ./Core/Inc/font12.d ./Core/Inc/font12.o ./Core/Inc/font12.su ./Core/Inc/font16.cyclo ./Core/Inc/font16.d ./Core/Inc/font16.o ./Core/Inc/font16.su ./Core/Inc/font20.cyclo ./Core/Inc/font20.d ./Core/Inc/font20.o ./Core/Inc/font20.su ./Core/Inc/font24.cyclo ./Core/Inc/font24.d ./Core/Inc/font24.o ./Core/Inc/font24.su ./Core/Inc/font8.cyclo ./Core/Inc/font8.d ./Core/Inc/font8.o ./Core/Inc/font8.su

.PHONY: clean-Core-2f-Inc

