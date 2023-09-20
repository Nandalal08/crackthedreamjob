#include<iostream>
#include<string>
using namespace std;

bool hasThreeConsecutiveOnes(string num)
 {
    int count = 0;

    for (char digit : num) {
        if (digit == '1')
         {
            count++;
            if (count == 3)
             {
                return true;
             }
        } else
        {
            count = 0; // Reset the count if '1' is not consecutive
        }
    }

    return false;
}
    
int main()
{
    string num;
    cin >> num;

    // string n = to_string(num);

    if (num[0]='9' && hasThreeConsecutiveOnes(num))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
