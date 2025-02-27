#include <iostream>

using std::cout;

class Test
{
    int a;
    char b;
    float c;
};

Test g_test_1;

void test_1(void);

int main(void){
    test_1();
    return (0);
}

void test_1(void)
{
    Test t1_tms;

  //  t1_tms.a = 100;  // 'Test::a': cannot access private member declared in class 'Test'
  //  t1_tms.b = 'A';  // 'Test::b': cannot access private member declared in class 'Test'
  //  t1_tms.c = 3.14f; // 'Test::c': cannot access private member declared in class 'Test'

  //  t1_tms.a = 200; // 'Test::a': cannot access private member declared in class 'Test'
  //  t1_tms.b = 'B';  // 'Test::b': cannot access private member declared in class 'Test'
  //  t1_tms.c = 6.28f; // 'Test::c': cannot access private member declared in class 'Test'
}