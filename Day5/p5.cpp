// #include<bits/stdc++.h>

// Majority algorithm using Moore voting algorithm 

// find candidate element. 
// confirm whether it is  majority element.

#include<iostream>
#include<vector>

using namespace std;

int findMajorityElement(vector<int>& nums)
{
    int cand = nums[0];
    int count =1;

    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==cand)
        {
            count++;
        }
        else
        {
            count--;
            if(count ==0)
            {
                cand = nums[i];
                count = 1;
            }
        }

    }
    count = 0;
    for(int num: nums)
    {
        if(num == cand)
        {
            count++;
        }
    }
    if(count  > nums.size()/2)
    {
        return cand;
    }
    else{
        return -1;
    }
 
}

int main()
{
    vector<int>nums = {2,2,3,2,4,2};
    int majorityelement = findMajorityElement(nums);
    if(majorityelement != -1)
    {
        cout<<majorityelement;
    }
    else{
        cout<<"no majority element";
    }
}

