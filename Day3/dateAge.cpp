// so how am i gonna do this   --
// 1. accept the DOB from user.
// 2. since this is c++ i ll be using ctime library
// 3. calculate current year
//    1. use time_t now = time(0)
//    2. tm*currentDate = localtime(&now)
//    here tm is time structure that contains tm_mon,tm_day etc
//    3. calculte currentyear 
//    int currentYear = currentDate->tm_year + 1970;
//    int currentMonth = currentDate->tm_mon + 1;
// 4. now that we have currentYear we can calc age by minusing currentYear - birthYear







#include <iostream>
using namespace std;
#include <ctime>

int main() {
    // Input the year, month, and day of birth
    int birthYear, birthMonth, birthDay;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter your birth month: ";
    cin >> birthMonth;

    cout << "Enter your birth day: ";
    cin >> birthDay;

    //calculate the current year .
    
    time_t now = time(0);
    tm* currentDate = localtime(&now);
    // The localtime function takes a pointer to a time_t variable (in this case, &now)
    //  and converts it into a tm structure, which stands for "time structure." 
    //  The tm structure contains various members such as 
    // tm_year, tm_mon, tm_mday, etc., which represent components of the date and time.

    int currentYear = currentDate ->tm_year + 1900;
    int currentMonth = currentDate->tm_mon + 1;

    int age = currentYear - birthYear;

    if(birthMonth> currentMonth || (birthDay > currentDate->tm_mday && birthMonth == currentMonth )){
        age --;
    }
cout<< age << " years";

}
