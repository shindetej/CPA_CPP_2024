#include<stdio.h>

int main(void){
    double G = 6.67 * 10e-11;
    double G = 6.67 * 10e-11;
    double m1 ;
    double m2 ; 
    double force;
    double r;

    printf("Please Enter Mass Of Object 1 In Kgs : ");
    scanf("%lf",&m1);

    printf("Please Enter Mass Of Object 2 In Kgs : ");
    scanf("%lf",&m2);


    printf("Please Enter Distance Between Two Object : ");
    scanf("%lf",&r);

    if(m1<= 0.0 || m2 <= 0.0 || r <= 0.0){
        printf("Invalid values for mass or distance");
        return(-1);
    }

    force = (G * m1 * m2);
    printf("G : %lf Gravitational force\n",G);
    printf("m1 : %lf Kgs \n",m1);
    printf("m2 : %lf Kgs \n",m2);
    printf("Force Of Gravitation : %lf Newton\n",force);

    return 0;
}