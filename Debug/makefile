################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include USBX/App/subdir.mk
-include Middlewares/USBX/USB/USBX/UX\ Device\ CoreStack/subdir.mk
-include Middlewares/USBX/USB/USBX/UX\ Device\ Controllers/subdir.mk
-include Middlewares/USBX/USB/USBX/UX\ Device\ Class\ HID\ Core/subdir.mk
-include Middlewares/USBX/USB/USBX/CoreSystem/subdir.mk
-include Drivers/STM32H7xx_HAL_Driver/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := USBX_HID_STAND_H723
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
USBX_HID_STAND_H723.elf \

MAP_FILES += \
USBX_HID_STAND_H723.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
USBX_HID_STAND_H723.list \


# All Target
all: main-build

# Main-build Target
main-build: USBX_HID_STAND_H723.elf secondary-outputs

# Tool invocations
USBX_HID_STAND_H723.elf USBX_HID_STAND_H723.map: $(OBJS) $(USER_OBJS) C:\Users\botelhod\STM32CubeIDE\USBX_Training\USBX_HID_STAND_H723\STM32H723ZGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "USBX_HID_STAND_H723.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\botelhod\STM32CubeIDE\USBX_Training\USBX_HID_STAND_H723\STM32H723ZGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="USBX_HID_STAND_H723.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

USBX_HID_STAND_H723.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "USBX_HID_STAND_H723.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) USBX_HID_STAND_H723.elf USBX_HID_STAND_H723.list USBX_HID_STAND_H723.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
