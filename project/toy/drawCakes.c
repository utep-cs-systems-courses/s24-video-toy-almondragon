#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawCakes.h"
#include "stateMachines.h"
#include "lcdtypes.h"

int limitFlag = 0;
u_char currentHeight = screenHeight-20;

void drawChocolate(int col, int row){
  fillRectangle(20,currentHeight,screenWidth-40,20,COLOR_BROWN);
  updateHeights();
}

void drawVanilla(int col, int row){
  fillRectangle(20,currentHeight,screenWidth-40,20,COLOR_BEIGE);
  updateHeights();
}

void drawBlueberry(int col, int row){
  fillRectangle(20,currentHeight,screenWidth-40,10, COLOR_ROYAL_BLUE);
  updateHeights();
}

void drawStrawberry(int col, int row){

}

void drawCandles(int col, int row){
    
}

void updateHeights(){
  currentHeight-=20;
  limitFlag+=1;
  if(limitFlag = 4)
    transition_state(candles);
}


void update_shapes(){
  switch (current_state){
      case chocolate:
        drawChocolate(0,0);
        break;
      case vanilla:
        drawVanilla(0,0);
        break;
      case blueberry:
        drawBlueberry(0,0);
        break;
      case strawberry:
        drawChocolate(0,0);
        break;
      case candles:
        drawCandles(0,0);
        break;
    }

}

