//LCM of two integers a and b is the smallest positive 
// integer that is divisible by both a and b.


// LCM = (n1 * n2) / 

#include<iostream>
using namespace std;

int main()
{
    int n1,n2,lcm;
    cout<<"enter the numbers : ";
    cin>>n1>>n2;
    int hcf = n1;
    int temp = n2;

    while(hcf!=temp)
    {
        if(hcf > temp )
        {
            hcf = hcf- temp;
        }
        else
        {
            temp = temp -hcf;
        }


    }

    cout<<"hcf is : "<<hcf;

    // int hcf = n1;
     lcm = (n1 * n2)/hcf;
    cout<<"lcm is : "<<lcm;

}