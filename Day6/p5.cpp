#include<bits/stdc++.h>
using namespace std;

int reversedArr(int arr[],int n)
{
    int start = 0;
    int end = n-1;

    while(start<end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}
int main()
{
    int arr[] ={5,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the og array is ";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    reversedArr(arr,n);
    cout<<"the reversed array is ";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}