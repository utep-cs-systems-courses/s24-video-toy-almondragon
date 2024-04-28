#include "lcdutils.h"
#include "lcddraw.h" 
#include "lcdtypes.h"
#include <msp430.h>
#include "stateMachines.h"
#include "buzzer.h"
#include "drawCakes.h"

State current_state = begin;
int limitFlag = 0;
u_char currentHeight = screenHeight-20;

void updateHeights(){
  currentHeight-=20;
  limitFlag+=1;
  if(limitFlag == 5)
    transition_state(candles);
}

char display_once = 1;
void state_chocolate(){
    if (display_once){
        drawChocolate(0,0);
        updateHeights();
        display_once = 0;
    }
}

void state_vanilla(){
    if (display_once){
        drawVanilla(0,0);
        updateHeights();
        display_once = 0;
    }
}

void state_blueberry(){
    if (display_once){
        drawBlueberry(0,0);
        updateHeights();
        display_once = 0;
    }
}

void state_strawberry(){
    if (display_once){
        drawStrawberry(0,0);
        updateHeights();
        display_once = 0;
    }
}

void state_candles(){
  clearScreen(COLOR_PINK);
}

void state_begin(){

}

void transition_state(State next_state){
    display_once = 1;
    redrawScreen = 1;
    current_state = next_state;
}

