# @Copyright Mazen
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
LINK = linkerscript.ld
PROJECTNAME = lab1

all: $(PROJECTNAME).bin
	@echo "========Build is Done========"


%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o : %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(PROJECTNAME).elf: $(OBJ) $(ASOBJ) $(LINK)
	$(CC)ld.exe -T $(LINK) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

$(PROJECTNAME).bin: $(PROJECTNAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean-all:
	rm *.o *.bin *.elf
	@echo "Everything is Clean"

clean:
	rm *.bin *.elf
