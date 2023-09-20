 // Check if pair with given Sum exists in Array (Two Sum)

// Given an array A[] of n numbers and another number x, the task is to check whether
//  or not there exist two elements in A[] whose sum is exactly x. 

// Examples: 

// Input: arr[] = {0, -1, 2, -3, 1}, x= -2
// Output: Yes
// Explanation:  If we calculate the sum of the output,1 + (-3) = -2
// Input: arr[] = {1, -2, 1, 0, 5}, x = 0
// Output: No
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

bool pairss(int arr[],int n,int x)
{

    sort(arr,arr+n);
    int l =0;
    int r = n-1;

    while(l<r)
    {
        if(arr[l]+ arr[r] == x)
        {
            return true;
        }
        else if(arr[l] + arr[r] < x)
        {
            l--;
        }
        else
        {
            r--;
        }
    }
return false;

}

    


int main()
{
    int arr[] = {1,2,3,5,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    if(pairss(arr,n,x))
    {
    cout<<"exist";
        
    }
    else
    {
        cout<<"doesnot exitst ";
    }


}