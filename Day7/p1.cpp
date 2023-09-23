//program to find leaders in array. 

//  {16, 17, 4, 3, 5, 2}

//  for example

//  here 
//  max_from_right = 2

//  for(i = n -1;i>=0;i--)
//  {
//     if(max_from_right < arr[i])
//     cout<<max_from_right<< " "
//  }

#include<iostream>
using namespace std;

int findLeader(int arr[],int n)
{
    int max_from_right = arr[n-1];
    cout<<max_from_right<<" ";

    for(int i = n-2;i>=0;i--)

    {
        if(max_from_right <arr[i])
        {
            max_from_right = arr[i];
                cout<<max_from_right<<" ";


        }
    }
}

int main()
{
    int num;
    int arr[50];

    cout<<"enter the no of elements: ";
    cin>>num;
    for(int i =0;i<num;i++)
    {
        cin>>arr[i];
    }

    findLeader(arr,num);
}