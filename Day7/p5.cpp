#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;

    //upward triangle

    int i,j,k;
    //loop
    for(i =1 ;i<=size;i++)
    {
        //space
        for(j=size;j>i;j--)
        {
            cout<<" ";
        }
            for(k=0;k <i*2-1;k++)
            {
                cout<<"*";
            }
            cout<<"\n";

    }

            //downwared triangle

        for(i=0;i<=size-1;i++)
        {
            for(j =0;j<i;j++)
            {
    cout<<" ";
}        for(k =(size-i)*2-1;k>0;k--)
{
    cout<<"*";
}
cout<<"\n";

}
        

    
}