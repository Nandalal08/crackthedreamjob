#include<iostream>
using namespace std;

// what is prime?
// anything that is divisble by only itself and 1 is called prime..

// 2,3,5,7,11
//note __ o and 1 are not prime numbers!


int main()
{

bool isPrime = true;
int num;
cout<<"enter the input: ";
cin>>num;




for(int i =2;i<=num/2;i++)
{
    if(num%i==0)
    {
        isPrime = false;
        break;

    }
}
if(num ==0||num == 1)
{
    isPrime = false;
}

if(isPrime)
{
    cout<<num<<"is prime number";
}
    else{
    cout<<num<<"is not prime number";

}


}