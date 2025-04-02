#include "rcc_driver/rcc_driver.h"
#include "rcc_driver/rcc_internal.h"
#include "common/uart_interface.h"

void RCC_AHB_Enable(RCCAHBEnable peripheral) {
    RCC->AHBENR |= peripheral;
}

void RCC_APB1_Enable(RCCAPB1Enable peripheral) {
    RCC->APB1ENR |= peripheral;
}

RCCStatusCode System_Clock_Init() {
    
    //INITIALIZE HSI
    RCC->CR |= (1U << 0);

    //GIVE TIME TO HSI TO STABILIZE
    for(uint32_t i = 0; i < 100000; i++) {};

    //IF HSI IS NOT READY AFTER A WHILE THOW ERROR
    if(!(RCC->CR & (1U << 1))) return RCC_ERROR_HSI;

    //RESET CLOCK SOURCE(SO SET HSI AS SOURCE) BY DEFAULT
    RCC->CFGR &= (uint32_t) ~(0x3 << 16); 

    //SET PLL MULT TO 9 SO 9x8 = 72MHZ SYSTEM CLOCK
    RCC->CFGR |= (uint32_t) (0x7 << 18);

    //DON'T DIVIDE PLL CLOCK BY 2
    RCC->CFGR |= (1U << 31);

    //ENABLE PLL
    RCC->CR |= (1U << 24);

    //GIVE TIME TO PLL TO STABILIZE
    for(uint32_t i = 0; i < 100000; i++) {};

    //IF PLL IS NOT READY AFTER A WHILE THOW ERROR
    if(!(RCC->CR & (1U << 25))) return RCC_ERROR_PLL;

    //CLEAR SYSTEM CLOCK SOURCE
    RCC->CFGR &= (uint32_t) ~(0x3 << 0);

    //SET PLL AS SYSTEM CLOCK SOURCE
    RCC->CFGR |= (0x2 << 0);

    //GIVE TIME FOR SYSTEM CLOCK TO BE SET
    for(uint32_t i = 0; i < 100000; i++) {};

    //IF SYSTEM CLOCK NOT SET AFTER A WHILE THROW ERROR
    if(!(RCC->CFGR & (2U << 2))) return RCC_ERROR_SYSCLOCK;

    //DO NOT DIVIDE AHB BUS CLOCK 
    RCC->CFGR &= (uint32_t) ~(0x0F << 4);

    //APB1 MAX CLOCK is 36MHZ SO DIVIDE APB1 CLOCK BY 2
    RCC->CFGR &= (uint32_t) ~(0x7 << 8);
    RCC->CFGR |= (uint32_t) (0x4 << 8);

    return RCC_OK;
}

UARTStatusCode USART2_Init_Clock(void) {
    RCC_APB1_Enable(RCC_ENABLE_USART2);
    return UART_OK;
}