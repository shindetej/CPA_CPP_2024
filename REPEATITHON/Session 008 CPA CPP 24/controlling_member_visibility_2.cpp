#include <iostream>
// company product
struct MassAndDistance_1
{
    double m1_tms;
    double m2_tms;
    double r_tms;
};


// company product 
class MassAndDistance_2
{
    double m1_tms;
    double m2_tms;
    double r_tms;
};


int main(void){
    using std::cout;
    using std::endl;

    // Client
    struct MassAndDistance_1 X1_TMS;
    MassAndDistance_2 X2_TMS;


    // Client is accessing the internal members of the product
    X1_TMS.m1_tms = 1.1;
    X1_TMS.m2_tms = 2.2;
    X1_TMS.r_tms = 3.3;

    // members are inaccessible compile time error
    // X2_TMS.m1_tms = 1.1;
    // X2_TMS.m2_tms = 2.2;
    // X2_TMS.r_tms = 3.3;

    return 0;
}