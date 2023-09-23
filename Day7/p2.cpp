
// C++ implementation of above approach


// 1. intialise p as -1 and min_dist as INT_MAX;

// 2.ITERATE FROM 0 TO N-1
// 3.CHECK WHETHER THE ELEMENT IS TARGET VALUE (3,6)
// 4.CHECK IF P!=-1
//  THEN P =0;
// 5. THIS WILL CONTINUE 


#include <iostream>
using namespace std;


int MinDist(int arr[],int n,int x ,int y )
{

int p =-1, min_dist = INT_MAX;

for(int i =0;i<n;i++)
{
    if(arr[i]==x||arr[i]==y)
    {
        if(arr[i]!=arr[p] && p!= -1)
        min_dist =  min(min_dist,i-p);
        p = i;
    }
}
if(min_dist == INT_MAX)
{
    return -1;  
}
return min_dist;

}



int main()
{
      int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x =3;
    int y=6;

    cout<<MinDist(arr,n,x,y);
}


