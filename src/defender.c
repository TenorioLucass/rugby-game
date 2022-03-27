// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(defender_position);
  UNUSED(attacker_spy);
  int dir = rand() % 48;
  
    if(dir == 0){
      return (direction_t) DIR_UP_RIGHT;
    }
    else if(dir == 1) {
      return (direction_t) DIR_RIGHT;
    }
    else if(dir == 2) {
      return (direction_t) DIR_DOWN_RIGHT;
    }
    else if(dir == 3) {
      return (direction_t) DIR_LEFT;
    }
    else if(dir >= 4 && dir < 8) {
      return (direction_t) DIR_DOWN_LEFT;
    }
    else if(dir >= 8 && dir < 12) {
      return (direction_t) DIR_UP_LEFT;
    }
    else if(dir >= 12 && dir < 24) {
      return (direction_t) DIR_DOWN;
    }
    else if(dir >= 24 && dir < 36) {
      return (direction_t) DIR_UP;
    }
    else if(dir >= 36 && dir < 52) {
      return (direction_t) DIR_STAY;
    }
  
  // TODO: Implement Defender logic here
  return (direction_t) DIR_LEFT;
}

/*----------------------------------------------------------------------------
#define DIR_STAY       {  0,  0 }16
#define DIR_UP         { -1,  0 }12
#define DIR_UP_RIGHT   { -1,  1 }1
#define DIR_RIGHT      {  0,  1 }1
#define DIR_DOWN_RIGHT {  1,  1 }1
#define DIR_DOWN       {  1,  0 }12
#define DIR_DOWN_LEFT  {  1, -1 }4
#define DIR_LEFT       {  0, -1 }1
#define DIR_UP_LEFT    { -1, -1 }4
*/
