// 7

#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;

for(int i =0;i<=n;i++)
{
    //to print spaces 
    for(int j = 1;j<=n-i;j++)
    {
    

        cout<<" ";
    }
    for(int k =0;k<i;k++)//prints start
    {
        cout<<"0";
    }
    cout<<endl;
    
}


}


// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;



// }