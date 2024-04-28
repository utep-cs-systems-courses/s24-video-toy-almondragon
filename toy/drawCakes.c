#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawCakes.h"
#include "stateMachines.h"
#include "lcdtypes.h"

void drawChocolate(int col, int row){
  clearScreen(COLOR_BLUE);
}

void drawVanilla(int col, int row){
  clearScreen(COLOR_RED);
}

void drawBlueberry(int col, int row){

}

void drawStrawberry(int col, int row){

}

void drawCandles(int col, int row){
    
}

void updateHeights(){

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
        drawStrawberry(0,0);
        break;
      case candles:
        drawCandles(0,0);
        break;
    }

}

