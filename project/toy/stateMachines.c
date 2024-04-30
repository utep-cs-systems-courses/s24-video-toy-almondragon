#include "lcdutils.h"
#include "lcddraw.h" 
#include "lcdtypes.h"
#include <msp430.h>
#include "drawCakes.h"
#include "stateMachines.h"
#include "buzzer.h"

State current_state = begin;
unsigned char limitFlag = 0;
unsigned char currentHeight = screenHeight-20;
unsigned char currentStart = 10;
unsigned char currentEnd = screenWidth - 20;

//void updateHeights(){
//currentHeight-=20;
//currentStart += 5;
//currentEnd-=10;
//limitFlag+=1;
//if(limitFlag == 5){
//  transition_state(candles);
//}
//}

char display_once = 1;
void state_chocolate(){
    if (display_once){
        drawChocolate();
        updateHeights();
        display_once = 0;
    }
}

void state_vanilla(){
    if (display_once){
        drawVanilla();
        updateHeights();
        display_once = 0;
    }
}

void state_blueberry(){
    if (display_once){
        drawBlueberry();
        updateHeights();
        display_once = 0;
    }
}

void state_strawberry(){
  if (display_once){
    drawStrawberry();
    updateHeights();
    display_once = 0;
  }
}

void state_candles(){
  drawCandles();
  hbday_song();
}

void state_begin(){
  if(display_once){
    clearScreen(COLOR_BLUE);
    display_once = 0;
  }
  buzzer_set_period(0);
  limitFlag = 0;
  currentHeight = screenHeight-20;
  currentStart = 10;
  currentEnd = screenWidth-20;
}

void transition_state(State next_state){
    display_once = 1;
    redrawScreen = 1;
    current_state = next_state;
}

