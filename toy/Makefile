CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -Os -I../h
LDFLAGS 	= -L../lib -L/opt/ti/msp430_gcc/include/

CC		= msp430-elf-gcc
AS 		= msp430-elf-gcc -mmcu=${CPU} -c

all: bakeCake.elf

bakeCake.elf: ${COMMON_OBJECTS} wdt_handler.o buzzer.o stateMachines.o drawCakes.o p2_interrupt_handler.o switches.o wdt_c_handler.o main.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd

load: bakeCake.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf
