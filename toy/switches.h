#ifndef switches_included
#define switches_included

#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT4

#define SWITCHES (SW1 | SW2 | SW3 | SW4)

char switch_update_interrupt_sense();
void switch_init();
void switch_interrupt_handler();

#endif
