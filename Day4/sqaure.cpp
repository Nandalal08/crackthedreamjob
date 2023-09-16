// #5

#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;

//the square contains only two loops and they are basically same. 

for(int i =0;i<n;i++)//external looop wil print colum as input. 
{

    for(int j = 0;j<n;j++)//internal loop will print row as input
    {
        cout<<"*";
    }
    cout<<endl;

}

}