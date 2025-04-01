#include "rcc_driver/rcc_driver.h"
#include "rcc_driver/rcc_internal.h"

void RCC_AHB_Enable(RCCAHBEnable peripheral) {
    RCC->AHBENR |= peripheral;
}