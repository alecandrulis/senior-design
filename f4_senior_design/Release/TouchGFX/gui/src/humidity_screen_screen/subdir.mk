################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.cpp \
../TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.cpp 

OBJS += \
./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.o \
./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.o 

CPP_DEPS += \
./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.d \
./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/humidity_screen_screen/%.o TouchGFX/gui/src/humidity_screen_screen/%.su TouchGFX/gui/src/humidity_screen_screen/%.cyclo: ../TouchGFX/gui/src/humidity_screen_screen/%.cpp TouchGFX/gui/src/humidity_screen_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-humidity_screen_screen

clean-TouchGFX-2f-gui-2f-src-2f-humidity_screen_screen:
	-$(RM) ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.cyclo ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.d ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.o ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenPresenter.su ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.cyclo ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.d ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.o ./TouchGFX/gui/src/humidity_screen_screen/humidity_screenView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-humidity_screen_screen

