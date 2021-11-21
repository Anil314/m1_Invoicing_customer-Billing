#include "../unity/unity.h"
#include "../inc/bill_operations.h"

/* Prototypes for all the test functions */
void test_total_bill(void);
void test_net_total(void);
void test_grand_total(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_total_bill);
  RUN_TEST(test_net_total);
  RUN_TEST(test_grand_total);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_total_bill(void){
    orders order,order1;
    int i = 1;
    order.itm[i].qty = 3;
    order.itm[i].price =45;
    order1.itm[i].qty = 5;
    order1.itm[i].price =5;
    TEST_ASSERT_EQUAL(135, total_bill(order, i));
    TEST_ASSERT_EQUAL(25, total_bill(order1, i));
}

void test_net_total(void){
    TEST_ASSERT_EQUAL(36, net_total(40));
    TEST_ASSERT_EQUAL(72, net_total(80));
    TEST_ASSERT_EQUAL(121.5, net_total(135));
}

void test_grand_total(void){
    TEST_ASSERT_EQUAL(94.4, grand_total(80));
    TEST_ASSERT_EQUAL(165.2, grand_total(140));
    TEST_ASSERT_EQUAL(143.37, grand_total(121.5));

}
