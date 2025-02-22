// header file inclusion
#include <iostream>
#include <exception>
#include <cmath>

// class definition
class MassAndDistance
{
    private:
        double m1;
        double m2;
        double r;
    
    public:
        MassAndDistance(double _m1,double _m2,double _r){
            if(_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0){
                throw std::domain_error("Bad values for mass and/or distance");
            }
            this->m1 = _m1;
            this->m2 = _m2;
            this->r = _r;
        }

        double computGravitational() const
        {
            // variable declarations
            double G = 6.67 * (10e11);
            double F ;

            // code
            F = (G * this->m1 * this->m2) / (this->r * this->r);
            return F;
        }
};

int main(void){
    // variable declarations
    MassAndDistance earthSun(1.9891 * (10e30),5.982 * (10e24),183291992.0);
    double forceBetweenEarthAndSun;

    // code 
    forceBetweenEarthAndSun = earthSun.computGravitational();

    std::cout << "Force between the Sun and the Earth is :" <<forceBetweenEarthAndSun << "Newton" << std::endl;

    return  0 ;
}