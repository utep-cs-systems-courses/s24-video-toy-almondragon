#include <msp430.h>
#include "stateMachines.h"
#include "buzzer.h"
#include "drawCakes.h"
#include "lcddraw.h"
#include "lcdutils.h"

State current_state = begin;

void state_chocolate(){
  drawChocolate(0,0);
}

void state_vanilla(){

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
