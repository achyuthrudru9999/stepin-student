#include "unity.h"
#include "cal.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add(void)
{
  TEST_ASSERT_EQUAL(11, add(5,6));
  TEST_ASSERT_EQUAL(5,add(3,0));
}

void test_subtract(void) 
{
  TEST_ASSERT_EQUAL(3, subtract(5,3));
  TEST_ASSERT_EQUAL(0, subtract(3,0);
}

void test_multiply(void) 
 {
  TEST_ASSERT_EQUAL(12, multiply(4,3));
  TEST_ASSERT_EQUAL(0, multiply(2,4));
}
void test_divide(void)
  {
  TEST_ASSERT_EQUAL(2, divide(20,10));
  TEST_ASSERT_EQUAL(3 , divide(15,5));
}
{
void test_sq(void)
  TEST_ASSERT_EQUAL(14, sq(4));
  TEST_ASSERT_EQUAL(0 , sq(3));
}
void test_sqrt(void) 
{
  TEST_ASSERT_EQUAL(2, sqrt(4));
  TEST_ASSERT_EQUAL(2 , sqrt(16));
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_sq);
  RUN_TEST(test_sqrt);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
