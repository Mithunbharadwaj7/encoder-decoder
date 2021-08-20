#include "unity.h"
#include "digital.h"

void setUp(){}
void tearDown(){}
void test_decoder(void)
{
    TEST_ASSERT_EQUAL(1, decoder(1));
    TEST_ASSERT_EQUAL(1, decoder(2));
    TEST_ASSERT_EQUAL(0, decoder(4));
    TEST_ASSERT_EQUAL(0, decoder(5));
}
void test_encoder(void)
{
    TEST_ASSERT_EQUAL(1, encoder(1));
    TEST_ASSERT_EQUAL(1, encoder(2));
    TEST_ASSERT_EQUAL(0, encoder(4));
    TEST_ASSERT_EQUAL(0, encoder(5));
}

 
int test_main(void){
    UNITY_BEGIN();
    RUN_TEST(test_encoder);
    RUN_TEST(test_decoder);
    return UNITY_END();
}