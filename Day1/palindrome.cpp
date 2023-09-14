#include<iostream>
using namespace std;

int main()
{
    int num;
    int rem,rev;
    cout<<"enter the no";
    cin>>num;
    int ognum = num;

    do{
        rem = ognum %10;
        cout<<"rem - "<<rem<<endl;
        rev = (rev * 10)+ rem;
        cout<<"rev - "<<rev<<endl;

        ognum = ognum/10;
    }while(ognum !=0);
    if(num == rev)
    {
        cout<<"pali";
    }
    else{
        cout<<"not pali";
    }
}