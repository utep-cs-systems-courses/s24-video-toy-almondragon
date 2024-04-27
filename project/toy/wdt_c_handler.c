#include <msp430.h>
#include <libTimer.h>
#include "state_machines.h"

void wdt_c_handler(){
  switch (current_state){
  case begin:
    state_begin();
    break;
  case chocolate:
    state_chocolate();
    break;
  case vanilla:
    state_vanilla();
    break;
  case blueberry:
    state_blueberry();
    break;
  case strawberry:
    state_strawberry();
    break;
  case candles:
    state_candles();
    break;
  }

}
