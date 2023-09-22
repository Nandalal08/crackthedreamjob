// // Given an array arr[] of size N. The task is to find the sum of the contiguous subarray within a arr[] with the largest sum.

// The Kadane's algorithm is a well-known algorithm used to find the maximum subarray sum in a given array of integers. It efficiently handles both positive and negative numbers and is often used to solve problems related to finding the maximum sum subarray in a linear time complexity, typically O(n).

// Here's a step-by-step explanation of the Kadane's algorithm:

// 1, Initialization:

// Initialize two variables: max_so_far and max_ending_here to a very small negative number (or negative infinity). These variables will keep track of the maximum subarray sum encountered so far and the maximum subarray sum ending at the current position.
// Iteration:

// 2. Traverse the array from left to right, one element at a time.
// Update max_ending_here:

// 3. For each element, update max_ending_here by adding the current element to it. This represents the maximum subarray sum ending at the current position.
// Update max_so_far:

// 4. If max_ending_here becomes greater than max_so_far, update max_so_far with the value of max_ending_here. This keeps track of the overall maximum subarray sum encountered so far.
// Handling Negative Numbers:

// 5. If max_ending_here ever becomes negative, reset it to 0. This is because, if the sum of elements in the subarray ending at the current position becomes negative, it's better to consider a new subarray starting from the next position.
// Repeat Steps 3 to 5 for the Entire Array:

// 6. Continue iterating through the entire array, repeating steps 3 to 5 for each element.
// Final Result:

// After processing all elements, max_so_far will contain the maximum subarray sum.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int contSubarray(int arr[],int n)
{

    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for(int i=0;i<n;i++)
    {
        max_ending_here += arr[i];
        if(max_ending_here> max_so_far)
        {
            max_so_far = max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here =0;
        }
    }
    return max_so_far;

}



int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = contSubarray(arr,n);
    cout<<"max sum "<<result;

}