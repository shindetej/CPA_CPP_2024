// This code will not compile

#include <iostream>

using std::cout;

int compute(int x, int y);

class Date
{
    public:
        int day;
        int month;
        int year;

        void show(void)
        {
            cout << day << "/" << month << "/" << year << "\n";
        }

        void show(Date* pDate)
        {
            cout<< pDate->day << "/" << pDate->month << "/" << pDate->year << "\n";
        }

        // EVERY FUNCTION  THAT IS WRITTEN INSIDE CLASS DATE
        // EXISTS TO PROCESS OBJECT OF CLASS DATE

        // EVERY SUCH FUNCTION MUST ACCEPT ADDRESS OF DATE OBJECT
        // TO UNDERSTAND WHICH DATE OBJECT TO PROCESS IN THE CURRENT CALL?
};


// Let C by any class
// let f() be any function  that we want to define in class

class C{
    public :
        void f(C* pC,/* Optional other params*/)
        {

        }
        
        void g()
        {

        }
};


int main(void)
{
    int result_tms;

    result_tms = compute(10,5);

    Date myBirthDate_tms;

    myBirthDate_tms.day = 29;
    myBirthDate_tms.month = 05;
    myBirthDate_tms.year = 1996;

    // Date::show(&myBirthDate_tms); // CTE but shown inner implementation of this pointer

    Date d1_tms;

    d1_tms.day = 1;
    d1_tms.month = 2;
    d1_tms.year = 2022;
    // Date::show(&d1_tms); // CTE but shown inner implementation of this pointer

    Date d2_tms;
    d2_tms.day = 3;
    d2_tms.month = 12;
    d2_tms.year = 1988;

    // Date::show(&d2_tms); // CTE but shown inner implementation of this pointer
}

int compute(int x,int y)
{
    return (x+y) * (x-y);
}

/////


class Date
{
    public:
        int day;
        int month;
        int year;

    void show()
    {
        cout<< this->day << "/" << this->month << "/" << this->year <<"\n";
    }
}