#include <stdio.h>

struct Test
{
    int a;
    char b;
    float c;
};

void test_1(void);
struct Test g_test_1;

int main(void)
{
    test_1();
    printf("g_test_1.a = %d g_test_1.b=%c g_test_1.c =  %f\n",
            g_test_1.a,g_test_1.b,g_test_1.c);

    return(0);
}

void test_1(void){
    struct Test t1_tms;
    g_test_1.a =100;
    g_test_1.b = 'A';
    g_test_1.c = 3.14f;

    t1_tms.a = 200;
    t1_tms.b = 'B';
    t1_tms.c = 6.28;

    printf("t1_tms.a = %d t1_tms.b = %c t1_tms.c = %f \n",t1_tms.a,t1_tms.b,t1_tms.c);
}