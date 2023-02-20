// #if G4
// #include "stm32g4xx_hal.h"
// #define LED_PIN                                GPIO_PIN_5 // for g4 board
// #define LED_GPIO_PORT                          GPIOA
// #define LED_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOA_CLK_ENABLE()
//
// #elif H7
// #include "stm32h7xx_hal.h"
// #define LED_PIN                                GPIO_PIN_0 // for h7 board
// #define LED_GPIO_PORT                          GPIOB
// #define LED_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()
//
// #else
// #error "Unsupported STM32 Family"
// #endif

#include "../config.h"

int main(void)
{
  HAL_Init();
  
  LED_GPIO_CLK_ENABLE();
  
  GPIO_InitTypeDef GPIO_InitStruct;
  
  GPIO_InitStruct.Pin = LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct); 

  while (1)
  {
    HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
    
    HAL_Delay(200);
  }
}

void SysTick_Handler(void)
{
  HAL_IncTick();
}

void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
  while (1) {}
}


void MemManage_Handler(void)
{
  while (1) {}
}

void BusFault_Handler(void)
{
  while (1) {}
}

void UsageFault_Handler(void)
{
  while (1) {}
}

void SVC_Handler(void)
{
}


void DebugMon_Handler(void)
{
}

void PendSV_Handler(void)
{
}