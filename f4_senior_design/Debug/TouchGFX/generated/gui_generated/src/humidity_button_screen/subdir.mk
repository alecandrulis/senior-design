################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.cpp 

OBJS += \
./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.o 

CPP_DEPS += \
./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/gui_generated/src/humidity_button_screen/%.o TouchGFX/generated/gui_generated/src/humidity_button_screen/%.su TouchGFX/generated/gui_generated/src/humidity_button_screen/%.cyclo: ../TouchGFX/generated/gui_generated/src/humidity_button_screen/%.cpp TouchGFX/generated/gui_generated/src/humidity_button_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-humidity_button_screen

clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-humidity_button_screen:
	-$(RM) ./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.cyclo ./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.d ./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.o ./TouchGFX/generated/gui_generated/src/humidity_button_screen/humidity_buttonViewBase.su

.PHONY: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-humidity_button_screen

