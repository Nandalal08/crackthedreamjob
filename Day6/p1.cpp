// Given an array of positive integers.
// All numbers occur an even number of times except one number which 
// occurs an odd number of times. Find the number in O(n) time & constant space.

// Examples : 

// Input : arr = {1, 2, 3, 2, 3, 1, 3}
// Output : 3

// Input : arr = {5, 7, 2, 7, 5, 2, 5}
// Output : 5d



// Algorithm
// function
// {
//     1. define a unordered hashmap
//     unordered_map <int,int>hash

//     2. pushing all the elements in array to hashmap
//     for(i =0;i<n;i++)
//     {
//         hash[arr[i]]++;
//     }

//     3.Hashmap contains key-values pairs , in that we have to check whether value count 
//     their counts stored in the hash map.
//     For each element, it checks if the count (i.second) is odd (not divisible by 2). 

//     for(auto i: hash)
//     {
//         if(i.second %2!=0)
//     }
//     return i.second
// }





#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int findOddNumber(int arr[],int n)
{
    //defining hashmap
    //{1:2,2:2,3:3}
    unordered_map<int,int>hash;
    //pushing all element in hash
    for(int i = 0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(auto i : hash)
    {
        if(i.second % 2 !=0)
        {
            return i.first;
        }
        else{
        return -1;
        }
    }
}



int main()
{
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findOddNumber(arr,n);
    cout<<"res "<<result;


}