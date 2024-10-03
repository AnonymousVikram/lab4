/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : main.c
Purpose : Generic application start

*/

#include <stdio.h>
#include "STM32L432KC_TIM16.h"

/*********************************************************************
 *
 *       main()
 *
 *  Function description
 *   Application entry point.
 */
int main(void) {
  initTIM16();
  setPWM(500, 1);
  while (1) {
    // Do nothing
  }
  return 0;
}

/*************************** End of file ****************************/
