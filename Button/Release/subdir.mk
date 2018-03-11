################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Button.cpp 

OBJS += \
./Button.o 

CPP_DEPS += \
./Button.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/filepile/workspaces/ArduinoCore" -D__AVR_ATmega328P__ -Wall -Os -ffunction-sections -fdata-sections -ffunction-sections -fdata-sections -fno-exceptions -v -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


