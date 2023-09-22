

// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
// Input: arr[] = {1, 2, 4, 6, 3, 7, 8}, N = 8
// Output: 5
// Explanation: The missing number between 1 to 8 is 5


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[],int n)
{
    //calc sum of first N natural numbers
    int sum;
    int N = n+1;
    int total = N*(N+1)/2;
//iterate through elements from 0 to n 
    for(int i =0;i<n;i++)
    //subract sumofnatural - sumofarray
            total -= arr[i];
    return total;
}

            
    


int main()
{
    int arr[] = {1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findMissing(arr,n);
    cout<<"res"<<result;
}