#include "lcdutils.h"
#include "lcddraw.h" 
#include "lcdtypes.h"
#include <msp430.h>
#include "drawCakes.h"
#include "stateMachines.h"
#include "buzzer.h"

State current_state = begin; // tracks the state
unsigned char limitFlag = 0; // keeps track of current layers in cake
unsigned char currentHeight = screenHeight-20; // current height dimension of all layers
unsigned char currentStart = 10; // current column and row start
unsigned char currentEnd = screenWidth - 20; // current column and row end (size)


// UPDATES DIMENSIONS AS LAYER ADDEDA
//void updateHeights(){
//currentHeight-=20;
//currentStart += 5;
//currentEnd-=10;
//limitFlag+=1;
//if(limitFlag == 5){
//  transition_state(candles);
//}
//}

char display_once = 1; // activated when something is to be drawn on screen

// ALL FUNCTIONS HAVE THE SAME IMPLEMENATION except begin and candles
void state_chocolate(){
  if (display_once){ // checks if somehting is to be drawn
    drawChocolate(); // drawing function is called
    updateHeights(); // size variables are updated for next layer
    display_once = 0; // flag to draw something is set to 0
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
  drawCandles(); // draws the candles
  hbday_song(); // plays the celebratory song
}

void state_begin(){
  if(display_once){ // draws screen blue to reset
    clearScreen(COLOR_BLUE);
    display_once = 0;
  }

  // all variables are set to 0 to restart game
  buzzer_set_period(0);
  limitFlag = 0;
  currentHeight = screenHeight-20;
  currentStart = 10;
  currentEnd = screenWidth-20;
}

// function to transition to next state
void transition_state(State next_state){
  display_once = 1; // display_once is activated as something is to be drawn with each button
  redrawScreen = 1; // tells main file to draw
  current_state = next_state; // changes current state
}

