// FIND THE SUBARRAY WITH GIVEN SUM 
#include<iostream>
using namespace std;

int suBarray(int arr[],int n ,int targetsum)
{
    bool flag =  false;
    int start = 0;
    int currentSum = arr[0];
    for(int i =1;i<=n;i++)
    {
        while(currentSum > targetsum && start < i-1)
        {
            currentSum = currentSum - arr[start];
            start++;
        }

        if(currentSum == targetsum)
        {
        cout<<"sum found btw "<<start<<"and "<<i-1<<endl;
        flag = true;
        }

        if(i<n)
        currentSum = currentSum + arr[i];
        

    }
    if(!flag){
cout<<"no subarray found ";
    return 0;
    }
    

    
}


int main()
{
    int arr[] ={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int targetsum = 10;
    suBarray(arr,n,targetsum);
}