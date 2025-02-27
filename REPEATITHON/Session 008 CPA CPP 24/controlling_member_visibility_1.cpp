#include <iostream>

struct MassAndDistance_1
{
    double m1_tms;
    double m2_tms;
    double r_tms;
};


class MassAndDistance_2{
    double m1_tms;
    double m2_tms;
    double r_tms;
};


int main(void)
{
    using std::cout;
    using std::endl;


    struct MassAndDistance_1 X1_tms;
    MassAndDistance_2 X2_tms;

    // client is accessing the internal members of product
    X1_tms.m1_tms = 1.1;
    X1_tms.m2_tms = 2.2;
    X1_tms.r_tms = 3.3;

    // client accessing internal memebers of the product
    // adding public to class will give accessibility
    // X2_tms.m1_tms = 1.1;
    // X2_tms.m2_tms = 2.2;
    // X2_tms.r_tms = 3.3


}