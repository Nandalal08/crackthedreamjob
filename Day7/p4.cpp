#include<iostream>
#include<string>
using namespace std;

string palindrome(string str)
{
    int N = str.length();
    for(int i  =0;i<N/2;i++)
    {
        if(str[i] != str[N-i-1])
        {
            return "No";
        }
    }
    return "yes";
}

int main()
{
    string input;
    cout<<"enter a string: ";
    getline(cin,input);
    
    cout<<palindrome(input);

    
}