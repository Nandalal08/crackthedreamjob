// after a long gap getting in touch with array





#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int i ,sum =0;
    for(i =0;i<n;i++)
    { 
        sum = sum + arr[i];
        
    }
    return sum;
}

int main()
{
    int arr[] = {3,6,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the sum is "<<sum(arr,n);

}