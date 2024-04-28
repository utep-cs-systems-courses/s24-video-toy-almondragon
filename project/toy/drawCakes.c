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

void drawCandles(){
  drawString5x7(10,5,"congratulations",COLOR_WHITE,COLOR_BLUE);
  fillRectangle((screenWidth/2)-5,currentHeight-10,10,30,COLOR_WHITE);
  fillRectangle((screenWidth/2)-5,currentHeight-20,10,10,COLOR_ORANGE);
}

void update_shapes(){
    // moving candles here 
}


