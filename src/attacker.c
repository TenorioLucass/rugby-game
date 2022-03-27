// Standard headers
#include <stdio.h>
#include <stdlib.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(
    position_t attacker_position, Spy defender_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(defender_spy);
  int dir = rand() % 48;

    if(dir == 0){
      return (direction_t) DIR_STAY;
    }
    else if(dir == 1) {
      return (direction_t) DIR_DOWN_LEFT;
    }
    else if(dir == 2) {
      return (direction_t) DIR_LEFT;
    }
    else if(dir == 3) {
      return (direction_t) DIR_UP_LEFT;
    }
    else if(dir >= 4 && dir < 8) {
      return (direction_t) DIR_UP;
    }
    else if(dir >= 8 && dir < 12) {
      return (direction_t) DIR_DOWN;
    }
    else if(dir >= 12 && dir < 24) {
      return (direction_t) DIR_UP_RIGHT;
    }
    else if(dir >= 24 && dir < 36) {
      return (direction_t) DIR_RIGHT;
    }
    else if(dir >= 36 && dir < 48) {
      return (direction_t) DIR_DOWN_RIGHT;
    }
  

  // TODO: Implement Attacker logic here
  return (direction_t) DIR_UP;
}

/*----------------------------------------------------------------------------
#define DIR_STAY       {  0,  0 }1
#define DIR_UP         { -1,  0 }4
#define DIR_UP_RIGHT   { -1,  1 }12
#define DIR_RIGHT      {  0,  1 }12
#define DIR_DOWN_RIGHT {  1,  1 }12
#define DIR_DOWN       {  1,  0 }4
#define DIR_DOWN_LEFT  {  1, -1 }1
#define DIR_LEFT       {  0, -1 }1
#define DIR_UP_LEFT    { -1, -1 }1
*/
