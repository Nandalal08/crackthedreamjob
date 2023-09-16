
// one external loop - rows (iterate from 1 to n)
// two internal loop  
// 1. space (iterate from 0 to space where space is n-i;)
// 2.print*( iterate from 0 to 2*i-1)


#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;

for(int i =1;i<=n;i++)
{
    int space = n -i;
    for(int j =0;j<space;j++)
    {
        cout<<"  ";//here it is double space
    }
    for(int j=0;j<(2*i-1);j++)
    {
        cout<<"* ";//here onepattern and one space;
    }
    cout<<endl;
}


}