#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

int buzzer_sec = 0;
char counter_buzzer_sec = 0;

void buzzer_init(){
  timerAUpmode();
  P2SEL &= ~ (BIT6 | BIT7);
  P2SEL &= ~BIT7;
  P2SEL |= BIT6;
  P2DIR = BIT6;
}

void buzzer_set_period(short cycles){
  CCR0 = cycles;
  CCR1 = cycles >> 1;
}

void hbday_song(){

  //to add code
}
