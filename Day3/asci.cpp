// A character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself in C programming. That value is known as ASCII value.

// For example, ASCII value of 'A' is 65.

// What this means is that, if you assign 'A' to a character variable, 65 is stored in that variable rather than 'A' itself.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the charac : "<<endl;
    cin>>ch;

    cout<<"the Ascii value of the character : "<<int(ch);
}