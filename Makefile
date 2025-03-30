Compiler=arm-none-eabi-gcc
Core=cortex-m4
CFlags = -c -mcpu=cortex-m4 -mthumb -std=gnu23  -mfpu=fpv4-sp-d16 -mfloat-abi=hard -g -O0 \
         -Wall -Wextra -Wpedantic -Werror -Wshadow -Wpointer-arith -Wcast-qual \
         -Wcast-align -Wsign-conversion -Wswitch-default -Wswitch-enum \
         -Wstrict-prototypes -Wmissing-prototypes -Wconversion -Wredundant-decls \
         -Winline -Wundef -Wbad-function-cast -Wfloat-equal -Wlogical-op \
         -Waggregate-return -Wformat=2 -Wmissing-include-dirs -Wstrict-overflow=5 \
         -Wunreachable-code -Wunused -Wuninitialized -Wnull-dereference \
         -Wduplicated-cond -Wno-unused-parameter -pedantic-errors \
         -Wvla -Wnonnull -Wmisleading-indentation -Wpointer-arith \
         -Wcast-align -Wlogical-op -Waggregate-return -Wfloat-equal \
         -Wpacked -Wno-inline

LDFlags= -mcpu=$(Core) -mthumb -nostdlib -T linkerScript.ld -Wl,-Map=firmware.map

OUT_DIR = output

all: $(OUT_DIR) main.o startup.o firmware.elf

$(OUT_DIR):
	mkdir $@

main.o:main.c | $(OUT_DIR)
	$(Compiler) $(CFlags) main.c -o $(OUT_DIR)/main.o

startup.o:startup.c
	$(Compiler) $(CFlags) startup.c -o $(OUT_DIR)/startup.o

firmware.elf: $(OUT_DIR)/main.o $(OUT_DIR)/startup.o
	$(Compiler) $(LDFlags) -o $@ $^

# all: main.o startup.o gpio_driver.o rcc_driver.o final.elf

# main.o:main.c
#	$(Compiler) $(CFlags) main.c -o main.o

# startup.o:startup.c
#	$(Compiler) $(CFlags) startup.c -o startup.o

# gpio_driver.o:gpio_driver.c
#	$(Compiler) $(CFlags) gpio_driver.c -o gpio_driver.o

# rcc_driver.o:rcc_driver.c
#	$(Compiler) $(CFlags) rcc_driver.c -o rcc_driver.o

# final.elf: main.o startup.o gpio_driver.o rcc_driver.o
#	$(Compiler) $(LDFlags) -o $@ $^

clean:
	rmdir /S /Q $(OUT_DIR) 2>nul || exit 0
	del /Q *.o *.elf *.map 2>nul || exit 0
	 
load:
	openocd -f board/st_nucleo_f3.cfg
