#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawCakes.h"
#include "stateMachines.h"
#include "lcdtypes.h"



void drawChocolate(int col, int row){
  fillRectangle(20,currentHeight,screenWidth-40,20,COLOR_BROWN);
}

void drawVanilla(int col, int row){
  fillRectangle(20,currentHeight,screenWidth-40,20,COLOR_BEIGE);
}

void drawBlueberry(int col, int row){
    fillRectangle(20,currentHeight,screenWidth-40,20, COLOR_ROYAL_BLUE);
}

void drawStrawberry(int col, int row){
    fillRectangle(20,currentHeight,screenWidth-40,20,COLOR_RED);
}

void drawCandles(int col, int row){
    clearScreen(COLOR_RED);
}

void update_shapes(){
    // moving candles here 
}


