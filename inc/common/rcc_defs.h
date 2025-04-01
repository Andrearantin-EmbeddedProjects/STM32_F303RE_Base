#ifndef RCC_DEFS_H
#define RCC_DEFS_H

#define RCC_AHB_ENABLE(n) (1U << (n))

/**
 * @brief RCC enable register enum. This is used to enable different peripheral clocks
 * 
 */
typedef enum {
    RCC_ENABLE_GPIOH = RCC_AHB_ENABLE(16),
    RCC_ENABLE_GPIOA = RCC_AHB_ENABLE(17),
    RCC_ENABLE_GPIOB = RCC_AHB_ENABLE(18),
    RCC_ENABLE_GPIOC = RCC_AHB_ENABLE(19),
    RCC_ENABLE_GPIOD = RCC_AHB_ENABLE(20),
    RCC_ENABLE_GPIOE = RCC_AHB_ENABLE(21),
    RCC_ENABLE_GPIOF = RCC_AHB_ENABLE(22),
    RCC_ENABLE_GPIOG = RCC_AHB_ENABLE(23),
}RCCAHBEnable;

typedef enum {
    RCC_OK = 0,
    RCC_ERROR_HSI,
    RCC_ERROR_PLL,
    RCC_ERROR_SYSCLOCK,
}RCCStatusCode;

#endif