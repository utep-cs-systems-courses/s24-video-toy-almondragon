#include "lcdutils.h"
#include "lcddraw.h" 
#include <msp430.h>
#include "stateMachines.h"
#include "buzzer.h"
#include "drawCakes.h"

State current_state = begin;

void state_chocolate(){
  clearScreen(COLOR_BLUE);
}

void state_vanilla(){
  clearScreen(COLOR_PINK);
}

void state_blueberry(){

}

void state_strawberry(){

}

void state_candles(){

}

void state_begin(){

}

void transition_state(State next_state){

}
