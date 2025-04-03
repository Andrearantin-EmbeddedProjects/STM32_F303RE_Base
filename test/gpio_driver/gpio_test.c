#include "gpio_driver/gpio_test.h"
#include<string.h>

static GPIO mock_gpio = {0};

//TODO CHECK ALTERNATE MODE IN TEST GPIO MODE

void setUp(void) {
  memset(&mock_gpio,0,sizeof(GPIO));
}

void tearDown(void) {
  memset(&mock_gpio,0,sizeof(GPIO));
}

//TODO CHECK ALL PORTS
void Test_GPIO_Init(void) {
  GPIO_Init(GPIO_PORT_A);

  printf("TEST GPIOA PORT INIT\n");
  TEST_ASSERT_NOT_NULL_MESSAGE(GPIOA, "GPIOA PORT INITIALIZE TEST FAIL\n");
  printf("\n\n");
}


void Test_GPIO_Set_Mode(void) {

  GPIO_Set_Mode(&mock_gpio,PIN_N_0,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 0 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3) == 0), "GPIO PIN 0 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_1,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 1 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x0C) == 0), "GPIO PIN 1 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_2,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 2 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30) == 0), "GPIO PIN 2 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_3,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 3 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC0) == 0), "GPIO PIN 3 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_4,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 4 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x300) == 0), "GPIO PIN 4 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_5,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 5 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC000) == 0), "GPIO PIN 5 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_6,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 6 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3000) == 0), "GPIO PIN 6 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_7,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 7 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC0000) == 0), "GPIO PIN 7 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_8,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 8 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30000) == 0), "GPIO PIN 8 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_9,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 9 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC00000) == 0), "GPIO PIN 9 SET INPUT TEST FAIL\n");
  printf("\n\n");
  
  GPIO_Set_Mode(&mock_gpio,PIN_N_10,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 10 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x300000) == 0), "GPIO PIN 10 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_11,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 11 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC00000) == 0), "GPIO PIN 11 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_12,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 12 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3000000) == 0), "GPIO PIN 12 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_13,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 13 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC000000) == 0), "GPIO PIN 13 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_14,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 14 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30000000) == 0), "GPIO PIN 14 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_15,GPIO_MODE_INPUT);
  printf("TEST GPIO PIN 15 MODE INPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC0000000) == 0), "GPIO PIN 15 SET INPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_0,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 0 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3) == 0x1), "GPIO PIN 0 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_1,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 1 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x0C) == 0x4), "GPIO PIN 1 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_2,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 2 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30) == 0x10), "GPIO PIN 2 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_3,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 3 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xc0) == 0x40), "GPIO PIN 3 SET OUTPUT TEST FAIL\n");
  printf("\n\n");
  
  GPIO_Set_Mode(&mock_gpio,PIN_N_4,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 4 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x300) == 0x100), "GPIO PIN 4 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_5,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 5 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC00) == 0x400), "GPIO PIN 5 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_6,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 6 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3000) == 0x1000), "GPIO PIN 6 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_7,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 7 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC000) == 0x4000), "GPIO PIN 7 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_8,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 8 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30000) == 0x10000), "GPIO PIN 8 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_9,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 9 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC0000) == 0x40000), "GPIO PIN 9 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_10,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 10 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x300000) == 0x100000), "GPIO PIN 10 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_11,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 11 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC00000) == 0x400000), "GPIO PIN 11 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_12,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 12 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x3000000) == 0x1000000), "GPIO PIN 12 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_13,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 13 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC000000) == 0x4000000), "GPIO PIN 13 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_14,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 14 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0x30000000) == 0x10000000), "GPIO PIN 14 SET OUTPUT TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_Mode(&mock_gpio,PIN_N_15,GPIO_MODE_OUTPUT);
  printf("TEST GPIO PIN 15 MODE OUTPUT\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.MODER & 0xC0000000) == 0x40000000), "GPIO PIN 15 SET OUTPUT TEST FAIL\n");
  printf("\n\n");
}

void Test_GPIO_PullUp_PullDown(void) {

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_0,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 0 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3) == 0x2), "GPIO PIN 0 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_1,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 1 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x0C) == 0x8), "GPIO PIN 1 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_2,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 2 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30) == 0x20), "GPIO PIN 2 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_3,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 3 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xc0) == 0x80), "GPIO PIN 3 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_4,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 4 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300) == 0x200), "GPIO PIN 4 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_5,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 5 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00) == 0x800), "GPIO PIN 5 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_6,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 6 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000) == 0x2000), "GPIO PIN 6 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_7,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 7 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000) == 0x8000), "GPIO PIN 7 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_8,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 8 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000) == 0x20000), "GPIO PIN 8 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_9,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 9 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000) == 0x80000), "GPIO PIN 9 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_10,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 10 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300000) == 0x200000), "GPIO PIN 11 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_11,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 11 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00000) == 0x800000), "GPIO PIN 11 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_12,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 12 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000000) == 0x2000000), "GPIO PIN 12 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_13,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 13 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000000) == 0x8000000), "GPIO PIN 13 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_14,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 14 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000000) == 0x20000000), "GPIO PIN 14 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_15,GPIO_PULL_DOWN);
  printf("TEST GPIO PIN 15 PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000000) == 0x80000000), "GPIO PIN 15 SET PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_0,GPIO_PULL_UP);
  printf("TEST GPIO PIN 0 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3) == 0x1), "GPIO PIN 0 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_1,GPIO_PULL_UP);
  printf("TEST GPIO PIN 1 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x0C) == 0x4), "GPIO PIN 1 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_2,GPIO_PULL_UP);
  printf("TEST GPIO PIN 2 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30) == 0x10), "GPIO PIN 2 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_3,GPIO_PULL_UP);
  printf("TEST GPIO PIN 3 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xc0) == 0x40), "GPIO PIN 3 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_4,GPIO_PULL_UP);
  printf("TEST GPIO PIN 4 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300) == 0x100), "GPIO PIN 4 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_5,GPIO_PULL_UP);
  printf("TEST GPIO PIN 5 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00) == 0x400), "GPIO PIN 5 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_6,GPIO_PULL_UP);
  printf("TEST GPIO PIN 6 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000) == 0x1000), "GPIO PIN 6 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_7,GPIO_PULL_UP);
  printf("TEST GPIO PIN 7 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000) == 0x4000), "GPIO PIN 7 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_8,GPIO_PULL_UP);
  printf("TEST GPIO PIN 8 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000) == 0x10000), "GPIO PIN 8 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_9,GPIO_PULL_UP);
  printf("TEST GPIO PIN 9 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000) == 0x40000), "GPIO PIN 9 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_10,GPIO_PULL_UP);
  printf("TEST GPIO PIN 10 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300000) == 0x100000), "GPIO PIN 10 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_11,GPIO_PULL_UP);
  printf("TEST GPIO PIN 11 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00000) == 0x400000), "GPIO PIN 11 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_12,GPIO_PULL_UP);
  printf("TEST GPIO PIN 12 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000000) == 0x1000000), "GPIO PIN 12 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_13,GPIO_PULL_UP);
  printf("TEST GPIO PIN 13 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000000) == 0x4000000), "GPIO PIN 13 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_14,GPIO_PULL_UP);
  printf("TEST GPIO PIN 14 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000000) == 0x10000000), "GPIO PIN 14 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_15,GPIO_PULL_UP);
  printf("TEST GPIO PIN 15 PULL UP\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000000) == 0x40000000), "GPIO PIN 15 SET PULL UP TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_0,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 0 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3) == 0), "GPIO PIN 0 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_1,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 1 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x0C) == 0), "GPIO PIN 1 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_2,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 2 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30) == 0), "GPIO PIN 2 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_3,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 3 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xc0) == 0), "GPIO PIN 3 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_4,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 4 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300) == 0), "GPIO PIN 4 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_5,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 5 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00) == 0), "GPIO PIN 5 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_6,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 6 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000) == 0), "GPIO PIN 6 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_7,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 7 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000) == 0), "GPIO PIN 7 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_8,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 8 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000) == 0), "GPIO PIN 8 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_9,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 9 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000) == 0), "GPIO PIN 9 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_10,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 10 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x300000) == 0), "GPIO PIN 10 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_11,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 11 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC00000) == 0), "GPIO PIN 11 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_12,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 12 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x3000000) == 0), "GPIO PIN 12 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_13,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 13 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC000000) == 0), "GPIO PIN 13 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_14,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 14 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0x30000000) == 0), "GPIO PIN 14 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");

  GPIO_Set_PullUp_PullDown(&mock_gpio,PIN_N_15,GPIO_NO_PULL_UP_PULL_DOWN);
  printf("TEST GPIO PIN 15 NO PULL UP OR PULL DOWN\n");
  TEST_ASSERT_MESSAGE(((mock_gpio.PUPDR & 0xC0000000) == 0), "GPIO PIN 15 SET NO PULL UP OR PULL DOWN TEST FAIL\n");
  printf("\n\n");
}

