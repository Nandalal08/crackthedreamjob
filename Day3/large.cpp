#include <iostream>
using namespace std;
#include <ctime>

int main() {
    
    int a , b ,c;

    cout << "Enter first no: ";
    cin >> a;

    cout << "Enter second no : ";
    cin >> b;

    cout << "Enter third no: ";
    cin>>c;
    if(a >= b && a >= c)
    {
        cout<<a <<" is largest";
    }
     else if(b >= a && b >= c)
    {
        cout<<b <<" is largest";
    }
    else{
        cout<<c <<" is largest";

    }

}
   