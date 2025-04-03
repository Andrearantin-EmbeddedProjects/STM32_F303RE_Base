#include "gpio_driver/gpio_test.h"
#include <stdio.h>


int main(void) {

    printf("UNIT TESTS START\n");
   
    UNITY_BEGIN();

    RUN_TEST(Test_GPIO_Init);

    RUN_TEST(Test_GPIO_Set_Mode);

    RUN_TEST(Test_GPIO_PullUp_PullDown);
    
    return UNITY_END();
}