// test_foo.c -----------------------------------------------
#include "unity.h"     // compile/link in Unity test framework
//#include "types.h"     // header file with no *.c file -- no compilation/linking
#include "node.h"       // source file foo.c under test

list_t* list = NULL;


char line1[] = "This is a first line";
char line2[] = "This is a second line";
char line3[] = "This is the last line";

void setUp(void) {
    list = create_list();
}   

void tearDown(void) {
    // Free memory
    free(list);
    list = NULL;
} 




//a test create lista

void test_crate_list(){
 list == NULL;
 TEST_ASSERT_NOT_NULL(list);
 TEST_ASSERT_NULL(list->init);
 TEST_ASSERT_EQUAL(0,list->size);
}

// a test case function
void test_increase_size(void)
{
    TEST_ASSERT_EQUAL(0x0,list->size);
    append(list,line1,strlen(line1)+1);
    TEST_ASSERT_EQUAL(0x1,list->size);


}


