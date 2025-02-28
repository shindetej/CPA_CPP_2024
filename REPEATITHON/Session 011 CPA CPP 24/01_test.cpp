// REVISION
#include<iostream>

class Test
{
    private:
        int a;
        char b;
        float c;

    public : 
        int d;
        int e;
        int f;
};


int main(void)
{
    Test t1_tms;
    Test t2_tms;

    // CTE
    // t1_tms.a = 10; //'Test::a': cannot access private member declared in class 'Test'
    // t1_tms.b = 'd'; // 'Test::b': cannot access private member declared in class 'Test'
    // t1_tms.c = 12.21f; //: 'Test::c': cannot access private member declared in class 'Test'
    
    // NO Compile time error
    t2_tms.d = 10;
    t2_tms.e = 11;
    t2_tms.f = 23;

}