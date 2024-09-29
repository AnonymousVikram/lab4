#include "STM32L432KC_RCC.h"
#include "STM32L432KC_TIM.h"

void initTIM(TIMx_t *tim) {
  // Enable the clock for the timer
  RCC->APB2ENR |= 1 << 16;

  // Set the AHB Prescaler to 0
  RCC->CFGR &= ~(0b111 << 4);
  while (!(RCC->CFGR >> 4 & 0b111));

  // Set the APB2 Prescaler to 0
  RCC->CFGR &= ~(0b111 << 11);

  // At this point, the clock should be going into TIM15
  
}
