// header file inclusion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definition of structure MassAndDistance
struct MassAndDistance
{
    double m1_tms;
    double m2_tms;
    double r_tms;
};

double ComputeGravitational(struct MassAndDistance* pData);

int main(void)
{
    // variables
    struct MassAndDistance earthSun_tms;
    struct MassAndDistance jupitorSun_tms;
    double forceBetweenEarthAndSun_tms;
    double forceBetweenJupitorAndSun_tms;

    earthSun_tms.m1_tms = 1.9891e30;
    earthSun_tms.m2_tms = 5.9722e24;
    earthSun_tms.r_tms = 149597871000;


    forceBetweenEarthAndSun_tms = ComputeGravitational(&earthSun_tms);
    printf("Gravitational force between the sun and the earth = %lf Newton\n",forceBetweenEarthAndSun_tms);


    jupitorSun_tms.m1_tms = 1.9891e30;
    jupitorSun_tms.m2_tms = 1.89813e27;
    jupitorSun_tms.r_tms = 760070000000;
    forceBetweenJupitorAndSun_tms = ComputeGravitational(&jupitorSun_tms);
    printf("Gravitational force between the sun and the jupitor = %lf Newton \n",forceBetweenJupitorAndSun_tms);

    return(0);
}

double ComputeGravitational(struct MassAndDistance* pData_tms){
    // variable definitions
    double G_TMS = 6.67 * 10e-11;
    double F_TMS;

    if(pData_tms->m1_tms <= 0.0 || pData_tms->m2_tms <= 0.0 || pData_tms->r_tms <= 0.0){
        return(NAN);
    }

    F_TMS = (G_TMS * pData_tms->m1_tms * pData_tms->m2_tms) / (pData_tms->r_tms* pData_tms->r_tms);

    return(F_TMS);
}