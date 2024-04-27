#include <msp430.h>
#include <libTimer.h>
#include <stdio.h>
#include "lcddraw.h"
#include "lcdutils.h"
#include "switches.h"
#include "buzzer.h"

void main(){
  P1DIR |= 64;
  P1OUT |= 64;
  configureClocks();
  lcd_init();
  switch_init();
  buzzer_init();
  enableWDTInterrupts();
  or_sr(0x8);
}
