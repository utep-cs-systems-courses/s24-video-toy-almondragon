#ifndef drawCakes_included
#define drawCakes_included

void drawChocolate(int col, int row);
void drawVanilla(int col, int row);
void drawBlueberry(int col, int row);
void drawStrawberry(int col, int row);
void drawCandles(int col, int row);
void updateHeights();
void update_shapes();

extern int layerLimitFlag;
extern char redrawScreen;

#endif
