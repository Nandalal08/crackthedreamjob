#include<iostream>
using namespace std;

int main()
{
    int fact =1;
    int num;
    cout<<"enter the factorial of the number";
    cin>>num;

    if(num<0)
    {
        cout<<"the number cannot be negative";

    }
    for(int i =1;i<=num;i++)
    {
        fact = fact *i;
    }
    cout<<"fact is "<<fact;
}