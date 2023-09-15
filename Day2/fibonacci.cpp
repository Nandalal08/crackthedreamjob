// The Fibonacci sequence is a series where the next term is the sum of the previous two terms. 
// The first two terms of the Fibonacci sequence is 0 followed by 1.

// if we want fibo uptp number 20

// 0,1,1,2,3,5,8,13

#include<iostream>
using namespace std;

int main()
{
    int n, t1 =0,t2 =1,nextterm = 0;

    cout<<"enter the num:";
    cin>>n;
    cout<<t1 <<" "<< t2 << " ";
    nextterm = t1 + t2;

    while(nextterm <=n){
        cout<<nextterm << " ";
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;

        
    }
}