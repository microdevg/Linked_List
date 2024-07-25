// test_foo.c -----------------------------------------------
#include "unity.h"     // compile/link in Unity test framework
//#include "types.h"     // header file with no *.c file -- no compilation/linking
#include "node.h"       // source file foo.c under test



void setUp(void) {}    // every test file requires this function;
                       // setUp() is called by the generated runner before each test case function

void tearDown(void) {} // every test file requires this function;
                       // tearDown() is called by the generated runner after each test case function

// a test case function
void test_Foo_Node(void)
{

}

// another test case function
void test_Foo2_Node(void)
{
  
}

