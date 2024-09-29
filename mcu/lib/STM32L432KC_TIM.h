#ifndef STM32L4_TIM_H
#define STM32L4_TIM_H

#include <cstdint>
#include <stdint.h>

#define __IO volatile

#define TIM1_BASE (0x40012C00UL)
#define TIM2_BASE (0x40000000UL)
#define TIM6_BASE (0x40001000UL)
#define TIM7_BASE (0x40001400UL)
#define TIM15_BASE (0x40014000UL)
#define TIM16_BASE (0x40014400UL)

typedef struct {
  __IO uint32_t CR1; // 0x00
  __IO uint32_t CR2; // 0x04
  __IO uint32_t SMCR; // 0x08
  __IO uint32_t DIER; // 0x0C
  __IO uint32_t SR; // 0x10
  __IO uint32_t EGR; // 0x14
  __IO uint32_t CCMR1; // 0x18
  __IO uint32_t CCMR2; // 0x1C
  __IO uint32_t CCER; // 0x20
  __IO uint32_t CNT; // 0x24
  __IO uint32_t PSC; // 0x28
  __IO uint32_t ARR; // 0x2C
  uint32_t RCR; // 0x30
  __IO uint32_t CCR1; // 0x34
  __IO uint32_t CCR2; // 0x38
  uint32_t RES0; // 0x3C
  uint32_t RES1; // 0x40
  uint32_t BDTR; // 0x44
  __IO uint32_t DCR; // 0x48
  __IO uint32_t DMAR; //0x4C
  __IO uint32_t OR1; // 0x50
  uint32_t RES2; // 0x54
  uint32_t RES3; // 0x58
  uint32_t RES4; // 0x5C
  __IO uint32_t TOR2; // 0x60
} TIMx_t; // VALID FOR TIM15

#define TIM1 ((TIMx_t *) TIM1_BASE)
#define TIM2 ((TIMx_t *) TIM1_BASE)
#define TIM6 ((TIMx_t *) TIM1_BASE)
#define TIM7 ((TIMx_t *) TIM1_BASE)
#define TIM15 ((TIMx_t *) TIM1_BASE)
#define TIM16 ((TIMx_t *) TIM1_BASE)

void initTIM(TIMx_t * tim);

void delay_ms(TIMx_t * tim, uint32_t ms);

#endif