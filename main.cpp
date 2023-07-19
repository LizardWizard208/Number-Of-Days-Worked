/*
* CSC-240-001
* Date: 07/09/23
*
* Assignment: Number of Days Worked
* 
* Description: Design a class that can convert number of days (ex 8 hrs is 1 day, 12 hrs is 1.5 days) the program should output addition, subtraciton, increment and ecrement between the numbers
*
***********************************************************************/
#include <iostream>
#include <string>

using namespace std;

class NumDays
    {private:
        double hours;
        double days;

    public:
        NumDays(double hrs = 0)
        {
            hours = hrs;
            days = hrs/8;
        }

        //get funciton
        double getHours()
        {
            return hours;
        }
        double getDays()
        {
            return days;
        }

        //set function
        void setHours(double hrs)
        {
            hours = hrs;
            days = hrs/8;
        }
        void setDays(double dys)
        {
            days = dys;
            hours = dys * 8;
        }

        //addition and subtraction operator
        double operator+(const NumDays &right)
        {
            return hours + right.hours;
        }
        
        double operator-(const NumDays &right) 
        {
            return hours - right.hours;
        }

        //Prefix and postfix increment operators

        NumDays operator++()
        {
            ++hours;
            days = hours / 8.00;
            return *this;
        }

        NumDays operator++(int) 
        {
            hours++;
            days = hours / 8.00;
            return *this;
        }
        
        //Prefix and postfix decrement operators
        NumDays operator--()
        {
            --hours;
            days = hours / 8.00;
            return *this;
        }

        NumDays operator--(int) 
        {
            hours--;
            days = hours / 8.00;
            return *this;
        }
};

//main will show the test 
int main()
{
    double firstHrs, secondHrs;

    cout << "Hours for senario 1: ";
    cin >> firstHrs;

    cout << "Hours for senario 2: ";
    cin >> secondHrs;

    NumDays sen1(firstHrs);
    NumDays sen2(secondHrs);

    cout << "Senario 1's " << sen1.getHours() << " hours is " << sen1.getDays() << " days" << endl;
    cout << "Senario 2's " << sen2.getHours() << " hours is " << sen2.getDays() << " days" << endl;

    cout << "When you add " << firstHrs << " and " << secondHrs << ", it equals " << sen1 + sen2 << " hours." << endl;
    cout << "When you subtract " << firstHrs << " and " << secondHrs << ", it equals " << sen2 - sen1 << " hours." << endl;

    ++sen1;
    cout << "senario 1 when incremented by one is " << sen1.getHours() << " hours, which is " << sen1.getDays() << " days" << endl;

    sen2++;
    cout << "senario 2 when incremented by one is " << sen2.getHours() << " hours, which is " << sen2.getDays() << " days" << endl;

    --sen1;
    --sen1;
    cout << "senario 1 when decremented by one is " << sen1.getHours() << " hours, which is " << sen1.getDays() << " days" << endl;

    sen2--;
    sen2--;
    cout << "senario 2 when decremented by one is " << sen2.getHours() << " hours, which is " << sen2.getDays() << " days" << endl;

    return 0;



}
