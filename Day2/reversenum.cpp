// we wil be given a number we should reverse the number
// eg if the number is 123 the reversed number will be 321

#include<iostream>
using namespace std;
int main()
{   int num;
    int rev,digit,rem;
    cout<<"enter the numbner";
    cin>>num;

    do{
        digit = num %10;
        rev = (rev *10 ) + digit;
        num = num/10;

    }while(num !=0);

    cout<<"the reserved num, is : "<<rev;

}