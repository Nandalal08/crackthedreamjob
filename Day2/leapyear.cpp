// // so last day we have worked on 5 problems .
// // this week wil be full of basic problems , in today list i m gonna try to solve 10 basic coding questions that are 
// // frequently asked in interviews

// so what is leap year?

// All years which are perfectly divisible by 4 are leap years except for century years
//  (years ending with 00), 
// which are leap years only if they are perfectly divisible by 400.

// For example,

// Leap Year	Not Leap Year
// 1968	            1971
// 2004	            2006
// 2012	            2010
// 1200	            1700
// 1600	            1800
// 2000	            1900


#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter the year";
    cin>>year;

    if(year%400 == 0)
    {
        cout<<"it is leap year";
    }else if(year%100 == 0)
    {
        cout<<"it is not a leap year";

    }
    else if(year%4==0){
        cout<<"it is leap year";

    }
    else{
        cout<<"it is not a leap year";

    }
}


