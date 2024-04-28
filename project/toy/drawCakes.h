#ifndef drawCakes_included
#define drawCakes_included

void drawChocolate();
void drawVanilla();
void drawBlueberry();
void drawStrawberry();
void drawCandles();
void updateHeights();
void update_shapes();

extern unsigned char currentStart;
extern unsigned char currentEnd;
extern int layerLimitFlag;
extern char redrawScreen;
extern unsigned char currentHeight;


#endif
