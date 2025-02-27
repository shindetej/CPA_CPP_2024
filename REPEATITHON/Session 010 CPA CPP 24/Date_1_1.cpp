#include<iostream>

using std::cout;
using std::endl; // use this for '\n'

class Date
{
    public:
        int day;
        int month;
        int year;

        void show()
        {
            cout<< "***** ENTER DATE::show() *****" << endl;
            cout<< "Address of object used for making the current call : "<< this << endl;
            cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
            cout<<" ***** LEAVE Date::show() *****"<<endl;
        }
};

int main(void)
{
    Date d1_tms;
    Date d2_tms;
    Date d3_tms;


    // setting day month year of d1_tms
    d1_tms.day= 02;
    d1_tms.month = 03;
    d1_tms.year = 1993;

    // setting day month year of d2_tms
    d2_tms.day =  29;
    d2_tms.month = 05;
    d2_tms.year = 1994;


    // setting day month year of d3_tms

    d3_tms.day =  01;
    d3_tms.month = 11;
    d3_tms.year = 2024;

    cout<< "main():Making use of object 'd1_tms' to make a call to Date::show()"<<endl;
    cout<< "main():Address of object 'd1_tms' is :"<<&d1_tms<<endl;
    d1_tms.show();
    
    // ----
    cout<< "main():Making use of object 'd2_tms' to make a call to Date::show()"<<endl;
    cout<<"main():Address of object 'd2_tms' is :"<< &d2_tms<<endl;
    d2_tms.show();

    cout<<"main(): Making use of object 'd3' to make a call to Date::show()"<<endl;
    cout<<"main():Address of object 'd3_tms' is : "<<&d3_tms<<endl;
    d3_tms.show();

}