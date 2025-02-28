#include<iostream>

using std::cout;
using std::endl;


class Date
{
    public:
        int day;
        int month;
        int year;

        void show()
        {
            cout<<"**** ENTER DATE::show() ****"<<endl;
            cout<<"Address of object used for making the current calls: "<< this <<endl;
            cout<<this->day << "/" << this->month << "/" <<this->year << endl;
            cout<<"**** LEAVE DATE::show() ****"<<endl;
        }
};


int main(void)
{
    // Define three local objects of class Date
    Date d1;
    Date d2;
    Date d3;


    // Define three pointers to class Date
    Date* pDate1 = &d1;
    Date* pDate2 = &d2;
    Date* pDate3 = &d3;

    // Setting day month year of d1
    pDate1->day = 29;
    pDate1->month = 2;
    pDate1->year = 1992;

    // Setting day month year of d2
    pDate2->day= 10;
    pDate2->month = 12;
    pDate2->year = 2010;

    // Setting day month year of d3
    pDate3->day = 11;
    pDate3->month = 11;
    pDate3->year = 2011;

    cout<<"main() : Making use of pointer pDate1 to make call to Date::show()" << endl;
    cout<<"main() : Address of object 'd1' is : " << pDate2<<endl;
    pDate1->show(); //== Date::show(&d1) // formal parameter will be 'this' pointer


    cout<<"main() : Making use of pointer pDate2 to make call to Date:show()" << endl;
    cout<<"main() : Address of object 'd2' is : "<<pDate2<<endl;
    pDate2->show(); // == Date::show(&d2)

    cout<<"main() : Making use of pointer pDate3 to make a call to Date:show()"<< endl;
    cout << "main() : Address of object 'd3' is : "<< pDate3<<endl;
    pDate3->show(); // == Date::show(&d3)


    return (0);
}