# Created by Jackson Stepka (Github: Pandabear1125)

# Use uname to detect current OS
UNAME := $(shell uname -s)

# Teensy core library files
TEENSY_DIR = teensy4
TEENSY_INCLUDE = -I$(TEENSY_DIR)
# name of the output lib file
TEENSY_LIB_NAME = libteensy4.a
# lib file name stripped of initial 'lib' and '.a'
TEENSY_LIB = teensy4

# Project files
PROJECT_DIR = .
PROJECT_SOURCE = $(wildcard $(PROJECT_DIR)/src/*.cpp) $(wildcard $(PROJECT_DIR)/src/*/*.cpp) $(wildcard $(PROJECT_DIR)/src/*.c) $(wildcard $(PROJECT_DIR)/src/*/*.c)
PROJECT_INCLUDE = src
# application filename will end up as PROJECT_NAME.hex once built
PROJECT_NAME = firmware

# Teensy41 compiler flags
TEENSY4_FLAGS = -DF_CPU=600000000 -DUSB_RAWHID -DLAYOUT_US_ENGLISH -D__IMXRT1062__ -DTEENSYDUINO=157 -DARDUINO_TEENSY41 -DARDUINO

# CPU flags to tailor the code for the Teensy processor
CPU_FLAGS = -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -mthumb

# Base compiler flags for both C++ and C
COMPILE_FLAGS = -Wall -O3 $(CPU_FLAGS) $(TEENSY4_FLAGS) -I$(TEENSY_INCLUDE) -ffunction-sections -fdata-sections
# C++ specific flags for compiling
CPP_FLAGS = -std=c++17 -felide-constructors -fno-exceptions -fpermissive -fno-rtti

# Required linker config for teensy related things
LINKING_FLAGS = -Wl,--gc-sections,--relax $(CPU_FLAGS) -Tteensy4/imxrt1062_t41.ld

# Required base libs for teensy
BASE_LIBS = -larm_cortexM7lfsp_math -lm -lstdc++

# Linux path to arduino
ARDUINO_PATH = $(abspath $(HOME)/.arduino15)

# Complete compilers
COMPILER_CPP := $(ARDUINO_PATH)/packages/teensy/tools/teensy-compile/5.4.1/arm/bin/arm-none-eabi-g++
COMPILER_C := $(ARDUINO_PATH)/packages/teensy/tools/teensy-compile/5.4.1/arm/bin/arm-none-eabi-gcc
OBJCOPY := $(ARDUINO_PATH)/packages/teensy/tools/teensy-compile/5.4.1/arm/bin/arm-none-eabi-objcopy

# targets are phony to force it to rebuild every time
.PHONY: build upload monitor kill clean_objs clean_bin clean
.DEFAULT_GOAL = build

# builds source, links with libraries, and constructs the .hex to be uploaded
build: clean
	@echo [Building Source]
	@$(COMPILER_CPP) $(COMPILE_FLAGS) $(CPP_FLAGS) $(PROJECT_SOURCE) $(TEENSY_LIB_NAME) $(TEENSY_INCLUDE) $(LINKING_FLAGS) -o $(PROJECT_NAME).elf
	@echo [Constructing $(PROJECT_NAME).hex]
	@$(OBJCOPY) -O ihex -R .eeprom $(PROJECT_NAME).elf $(PROJECT_NAME).hex
	@chmod +x $(PROJECT_NAME).hex
	@echo [Cleaning Up]
	@rm -f $(PROJECT_NAME).elf 
	@git config --local core.hooksPath .githooks

# build teensy core library from source into a static library
lib_teensy:
	@echo [Building Teensy Core CPP]
	@$(COMPILER_CPP) $(COMPILE_FLAGS) $(CPP_FLAGS) -c $(TEENSY_DIR)/*.cpp $(TEENSY_INCLUDE)
	@echo [Building Teensy Core C]
	@$(COMPILER_C) $(COMPILE_FLAGS) -c $(TEENSY_DIR)/*.c $(TEENSY_INCLUDE)
	@echo [Assembling Static Library]
	@ar rcs $(TEENSY_LIB_NAME) *.o
	@echo [$(TEENSY_LIB_NAME) Created in $(PROJECT_DIR)]
	@rm *.o -f
	@echo [Cleaning Up]

# builds hex, uploades it, and starts monitoring output
upload: build
	@echo [Uploading] - If this fails, press the button on the teensy and re-run make upload
	@tycmd upload $(PROJECT_NAME).hex
	@tycmd monitor --timeout-eof=-1 -R

# monitors currently running firmware on robot
monitor:
	@echo [Monitoring]
	@tycmd monitor --timeout-eof=-1 -R

# resets teensy and switches it into boot-loader mode, effectively stopping any execution
# this only works if power is consistent, will restart loaded firmware if turned off and on again
kill:
	@echo [Attempting to Kill Teensy]
	@tycmd reset -b

# restarts teensy
restart:
	@echo [Attempting to Restart Firmware]
	@tycmd reset

# deletes all object files
clean_objs:
	@rm -f *.o 

# deletes all hex files
clean_bin:
	@rm -f *.hex 
	@rm -f *.elf 

# overall clean target
clean: clean_objs clean_bin

clean_all: clean_objs clean_bin
	@rm -f *.a

# builds all libraries and the project
build_all: clean lib_teensy build
