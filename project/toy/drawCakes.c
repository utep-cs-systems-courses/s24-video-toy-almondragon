#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawCakes.h"
#include "stateMachines.h"
#include "lcdtypes.h"


// draws a layer of chocolate
void drawChocolate(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_BROWN);
}

// draws a layer of vanilla
void drawVanilla(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_BEIGE);
}

// draws a layer of blueberry
void drawBlueberry(){
    fillRectangle(currentStart,currentHeight,currentEnd,20, COLOR_ROYAL_BLUE);
}

// draws a layer of strawberry
void drawStrawberry(){
  fillRectangle(currentStart,currentHeight,currentEnd,20,COLOR_RED);
}

// draws candle
void drawCandles(){
  drawString5x7(10,5,"congratulations",COLOR_WHITE,COLOR_BLUE); // 8x12 font created but  5x7 is better sized for current scene
  fillRectangle((screenWidth/2)-5,currentHeight-10,10,30,COLOR_WHITE);
  fillRectangle((screenWidth/2)-5,currentHeight-20,10,10,COLOR_ORANGE);
}

void update_shapes(){
    // moving candles here 
}


