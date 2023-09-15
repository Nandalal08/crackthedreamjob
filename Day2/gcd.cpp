
// The largest integer which can perfectly divide two integers is known as GCD or 
// HCF of those two numbers.

// For example, the GCD of 4 and 10 is 2 since it is the largest integer that can 
// divide both 4 and 10. 

// how are we gonna execute it - for example let us take

// n1 = 16 n2 =76 what is gcd?

// for this we have to execute three conditions

// 1. check (n1 != n2) if false then 
// 2. if(n1 > n2) then n1 = n1-n2;
// 3. if (n2>n1) then n2 =n2 - n1;
// this wil continue until n1 = n2 is true

// n1	n2	n1 > n2	    n1 -= n2	n2 -= n1	n1 != n2
// 16	76	false	        -	        60      	true
// 16	60	false	        -	        44      	true
// 16	44	false	        -	        28      	true
// 16	28	false	        -	        12      	true
// 16	12	true	        4	        -	        true
// 4	12	false	        -	        8	        true
// 4	8	false	        -	        4	        false


#include<iostream>
using namespace std;

  int main()
  {
    int a,b;

    cout<<"enter input 1 : ";
    cin>>a;
    cout<<"enter input 2 : ";
    cin>>b;

    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
            else{
            b = b-a;
        }

    }
    cout<<"the hcf is : "<<a;
    // cout<<"the try out : "<<b;



  }  
 


