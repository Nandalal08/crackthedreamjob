
// 125 => 1! + 2! + 5!


#include<iostream>
using namespace std;
int factorial(int num) 
{ 
     if(num<0)
    {
        cout<<"the number cannot be negative";

    }
    int fact =1;
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{

    int num,rem;
    int result=0;
    int sum;

    cout<<"enter the num : ";
    cin>>num;
    int ognum = num;
    // int result;
    do
    {
        rem = ognum%10;
        cout<<"rem ="<<rem<<endl;
        result +=  factorial(rem);
        cout<<"result="<<result<<endl;
        ognum = ognum/10;
        cout<<"next-"<<ognum;

    
    }
    while(ognum!=0);


    if(result == num)
    {
        cout<<num<<" is amstrong";
    }
    else
    {
        cout<<num<<" is not amstrong";

    }

  
}
