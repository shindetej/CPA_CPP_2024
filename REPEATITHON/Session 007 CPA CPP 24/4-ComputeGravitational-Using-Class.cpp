// header file inclusion
#include <iostream>
#include <exception>
#include <cmath>

// class definition
class MassAndDistance
{
    private: 
        double m1_tms;
        double m2_tms;
        double r_tms;
    
    public:
        MassAndDistance(double _m1,double _m2,double _r)
        {
            if(_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0) 
                throw std::domain_error("Bad values for mass and/or distance");
            
            this->m1_tms = _m1;
            this->m2_tms = _m2;
            this->r_tms = _r;
        }

        double computeGravitational() const
        {
            // variable declarations
            double G_TMS = 6.67 * (10e-11);
            double F_TMS;

            // code
            F_TMS = (G_TMS * this->m1_tms * this->m2_tms)/(this->r_tms * this->r_tms);
            return F_TMS;
        }

};


int main(void)
{
    // variable definitions
    MassAndDistance earthSun_tms(1.9891* (10e30), 5.9722 * (10e24), 149597871000.0);
    MassAndDistance jupitorSun_tms(1.9891* (10e30), 1.89813 * (10e27), 760070000000.0);

    double forceBetweenEarthAndSun_tms;
    double forceBetweenJupitorAndSun_tms;

    // code
    forceBetweenEarthAndSun_tms =earthSun_tms.computeGravitational();
    forceBetweenJupitorAndSun_tms = jupitorSun_tms.computeGravitational();

    std::cout << "Force between the Sun and the Earth is " << forceBetweenEarthAndSun_tms << " Newton" << std::endl;

    std::cout << "Force between the Sun and the Jupitor is " << forceBetweenJupitorAndSun_tms << " Newton" << std::endl;

    return 0;
}

