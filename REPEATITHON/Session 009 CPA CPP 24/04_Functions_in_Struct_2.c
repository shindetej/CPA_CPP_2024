#include<stdio.h>

/*
    As per c-standard function can not be defined inside a structure
*/

struct Date
{
    int day_tms;
    int month_tms;
    int year_tms;

    /**
    Function definition -> not allowed inside struct
    entire function will show CTE 
     */

     /*
     int get_day()
     {
        return (day);
     }
        */
};