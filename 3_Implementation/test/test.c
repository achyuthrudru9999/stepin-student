#include "unity.h"
#include "cal.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add(void) {
  contact_t new_contact = {"Add", "12345", "user1@email.com"};
  TEST_ASSERT_EQUAL(0, add(&new_contact));
}

void test_subtract(void) {
  contact_t new_contact = {"subtract", "12345", "user1@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0, delete_contact(new_contact.name));
}

void test_multiply(void) {
  contact_t new_contact = {"Modify_User", "12345", "user1@email.com"};
  contact_t new_contact1 = {"Modified_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0, modify_contact(new_contact.name, &new_contact1));
  TEST_ASSERT_EQUAL(0, delete_contact(new_contact1.name));
}
void test_divide(void) {
  contact_t new_contact = {"Search_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0 , search_contact(new_contact.name));
  TEST_ASSERT_EQUAL(0 , delete_contact(new_contact.name));
}
{
void test_sq(void) {
  contact_t new_contact = {"Search_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0 , search_contact(new_contact.name));
  TEST_ASSERT_EQUAL(0 , delete_contact(new_contact.name));
}
{
void test_sqrt(void) {
  contact_t new_contact = {"Search_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0 , search_contact(new_contact.name));
  TEST_ASSERT_EQUAL(0 , delete_contact(new_contact.name));
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