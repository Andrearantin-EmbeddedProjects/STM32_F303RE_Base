#ifndef RCC_DRIVER_H
#define RCC_DRIVER_H

#include "common/rcc_defs.h"

/**
 * @brief Enables a peripheral clock on AHB bus
 * 
 * @param peripheral Peripheral to whom the clock needs to be enabled. 
 * This is a value of @ref RCCAHBEnable
 */
void RCC_AHB_Enable(RCCAHBEnable peripheral);

#endif