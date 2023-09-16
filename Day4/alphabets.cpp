
// A
// B B
// C C C
// D D D D
// E E E E E



#include <iostream>
using namespace std;

int main()
{
char n;
char al = 'A';
cin>>n;

n = toupper(n);

for(int i =1;i<=(n-'A'+1);i++)
{
    for(int j =1;j<=i;j++)

    {
        cout<<al<<" ";
}
al++;
cout<<endl;

}
}
