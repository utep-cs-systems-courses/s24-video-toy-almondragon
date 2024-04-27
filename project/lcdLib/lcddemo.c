/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */

void drawBox(u_char acol, u_char arow, u_char size, u_int color){
  u_char max_col = acol + size;
  u_char max_row = arow + size;
  for(u_char col = acol - size; col < max_col;col++)
    for(u_char row = arow - size; row <max_row; row++)
      drawPixel(col,row,color);

}

int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  // drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  drawBox(screenWidth/2, screenHeight/2, 15, COLOR_ORANGE);

  
}
