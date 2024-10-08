#ifndef STM32L4_TIM16_H
#define STM32L4_TIM16_H

#include <stdint.h>

#define __IO volatile

#define TIM1_BASE (0x40012C00UL)
#define TIM2_BASE (0x40000000UL)
#define TIM6_BASE (0x40001000UL)
#define TIM7_BASE (0x40001400UL)
#define TIM15_BASE (0x40014000UL)
#define TIM16_BASE (0x40014400UL)

typedef struct {
  __IO uint32_t CR1;   // 0x00
  __IO uint32_t CR2;   // 0x04
  uint32_t RES1;       // 0x08
  __IO uint32_t DIER;  // 0x0C
  __IO uint32_t SR;    // 0x10
  __IO uint32_t EGR;   // 0x14
  __IO uint32_t CCMR1; // 0x18
  uint32_t RES2;       // 0x1C
  __IO uint32_t CCER;  // 0x20
  __IO uint32_t CNT;   // 0x24
  __IO uint32_t PSC;   // 0x28
  __IO uint32_t ARR;   // 0x2C
  __IO uint32_t RCR;   // 0x30
  __IO uint32_t CCR1;  // 0x34
  uint32_t RES3;       // 0x38
  uint32_t RES4;       // 0x3C
  uint32_t RES5;       // 0x40
  __IO uint32_t BDTR;  // 0x44
  __IO uint32_t DCR;   // 0x48
  __IO uint32_t DMAR;  // 0x4C
  __IO uint32_t OR1;   // 0x50
  uint32_t RES6;       // 0x54
  uint32_t RES7;       // 0x58
  uint32_t RES8;       // 0x5C
  __IO uint32_t TOR2;  // 0x60
} TIM16_t;             // VALID FOR TIM16

#define TIM16 ((TIM16_t *)TIM16_BASE)

void initTIM16();

void setPWM(uint16_t dutyCycle, uint16_t frequency);

#endif