#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawCakes.h"
#include "stateMachines.h"
#include "lcdtypes.h"



void drawChocolate(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_BROWN);
}

void drawVanilla(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_BEIGE);
}

void drawBlueberry(){
    fillRectangle(currentStart,currentHeight,currentEnd,20, COLOR_ROYAL_BLUE);
}

void drawStrawberry(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_RED);
}

void drawCandles(int col, int row){
    clearScreen(COLOR_RED);
}

void update_shapes(){
    // moving candles here 
}


