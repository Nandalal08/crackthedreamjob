// 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//so the arrays are passed here
// we intialize  i with n-1 and j with 0

// while condition arr1[i] > arr2[j] 
// then we swap them

// this takes place until a false condtion

// then sort the remaning array
// find median by adding arr1[n-1] + arr2[0]/2


int getMedian(int arr1[],int arr2[],int n)
{

int j =0;
int i=n-1;

while(arr1[i]>arr2[j] && i > j && i>-1)
{
    swap(arr1[i--],arr2[j++]);
}

sort(arr1,arr1+n);
sort(arr2,arr2+n);

return(arr1[n-1]+arr2[0])/2;

}




int main()
{
     int arr1[] = { 1, 12, 15, 26, 38 };
    int arr2[] = { 2, 13, 17, 30, 45 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    if(n1 == n2)
    {
    cout<<getMedian(arr1,arr2,n1);

    }else{
        cout<<"not equal size.";
    }


}