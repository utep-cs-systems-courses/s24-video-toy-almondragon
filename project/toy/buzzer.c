#include <msp430.h>
#include "libTimer.h"
#include "stateMachines.h"
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
  int notes[52]= {6811, 0, 6811, 0, 6067 , 0, 6811, 0, 5102, 0, 5727, 5727, 0, 6811, 0, 6811, 0, 6067, 0, 6811, 0, 4545, 0, 5102, 5102, 6811, 0, 6811, 0, 6811, 0, 4050, 0, 5102, 0, 5727, 0, 6067, 0, 7644, 0, 7644, 0, 4050, 0, 5102, 0, 4545, 0, 5102, 5102}; 
  buzzer_sec++;
  if(counter_buzzer_sec == 52){
    counter_buzzer_sec = 0;
    transition_state(begin);
  }
  if(buzzer_sec >30){
    buzzer_sec = 0;
    counter_buzzer_sec++;
    buzzer_set_period(notes[counter_buzzer_sec-1]);
  }
}
