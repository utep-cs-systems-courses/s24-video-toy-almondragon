#ifndef stateMachines_included
#define stateMachines_included

typedef enum{
  chocolate,
  vanilla,
  blueberry,
  strawberry,
  candles,
  begin

} State;

void state_chocolate();
void state_vanilla();
void state_blueberry();
void state_strawberry();
void state_candles();
void state_begin();
void transition_state(State next_state);

extern State current_state;
extern unsigned char limitFlag;
extern unsigned char currentHeight;
extern unsigned char currentEnd;
extern unsigned char currentStart;
#endif
