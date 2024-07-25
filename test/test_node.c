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
} 

// a test case function
void test_increase_size(void)
{
    TEST_ASSERT_EQUAL(0x0,list->size);
    append(list,line1,strlen(line1)+1);
    TEST_ASSERT_EQUAL(0x1,list->size);


}


