#include <iostream>

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
    return (0);
}

void test_1(void)
{
    Test t1_tms;

    // g_test_1.a_tms = 100; // member inaccssible
    g_test_1.b_tms = 'A';
    g_test_1.c_tms = 3.14f;

    
    //  t1_tms.a_tms = 200; // member inaccssible
    t1_tms.b_tms= 'D';
    t1_tms.c_tms = 4.1f;

}