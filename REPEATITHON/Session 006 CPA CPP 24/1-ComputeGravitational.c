#include<stdio.h>
int main(void)
{
    double m1;
    double m2;
    double r;
    double G=6.67 * 10e-11;
    double F;


    printf("Enter mass of object 1 in Kgs : ");
    scanf("%lf",&m1);


    printf("Enter mass of object 2 in Kgs : ");
    scanf("%lf",&m2);

    printf("Enter the distance between the objects in meters : ");
    scanf("%lf",&r);


    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0)
    {
        printf("Invalid values for mass or distance\n");
        return (-1);
    }

    F = (G * m1 * m2) / (r * r);

    printf("Gravitational force of attraction = %lf Newtons\n",F);
    return (0);
}