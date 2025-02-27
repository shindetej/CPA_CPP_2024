#include<iostream>

using std::cout;


class Test
{
    private:
        int a_tms;
    public:
        char b_tms;
        float c_tms;
};


Test g_test_1;
void test_1(void);

int main(void)
{
    test_1();
    return(0);
}

void test_1(void){
    Test t1_tms;

   // g_test_1.a_tms = 100; // member "Test::a_tms" is inaccessible
    g_test_1.b_tms = 'A';
    g_test_1.c_tms = 3.14f;

    // t1_tms.a_tms = 200; // member "Test::a_tms" is inaccessible
    t1_tms.b_tms = 'B';
    t1_tms.c_tms = 6.28f;

}