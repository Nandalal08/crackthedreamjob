// finding the largest number using __ARRAY_OPERATORS


#include<iostream>
using namespace std;
int large(int arr[],int n )
{
    int max= arr[0];
    int min= arr[0];

    for(int i =0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<=min)
        {
            min = arr[i];
        }
    }
    // return max , min;
    cout<<max<<" "<<min;
}

int main()
{

int arr[] = { 20, 30, 40 };
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"largest is "<<large(arr,n);

}