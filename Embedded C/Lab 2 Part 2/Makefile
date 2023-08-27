# @Copyright Mazen
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
THUMB = -mthumb
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
LINK = linkerscript.ld
PROJECTNAME = lab2

all: $(PROJECTNAME).bin
	@echo "========Build is Done========"


%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o : %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $(THUMB) $< -o $@

$(PROJECTNAME).elf: $(OBJ) $(LINK)
	$(CC)ld.exe -T $(LINK) $(OBJ) -o $@ -Map=Map_file.map

$(PROJECTNAME).bin: $(PROJECTNAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean-all:
	rm *.o *.bin *.elf
	@echo "Everything is Clean"

clean:
	rm *.bin *.elf

objdump:
	$(CC)objdump.exe -h $(OBJ)
	$(CC)objdump.exe -h $(PROJECTNAME).elf



objdump_src:
	$(CC)objdump.exe -h $(OBJ)

objdump_elf:
	$(CC)objdump.exe -h $(PROJECTNAME).elf

objdump_bin:
	$(CC)objdump.exe -h $(PROJECTNAME).bin


symbols:
	$(CC)nm.exe $(OBJ)
	$(CC)nm.exe $(PROJECTNAME).elf


symbols_src:
	$(CC)nm.exe $(OBJ)

symbols_elf:
	$(CC)nm.exe $(PROJECTNAME).elf

symbols_bin:
	$(CC)nm.exe $(PROJECTNAME).bin

