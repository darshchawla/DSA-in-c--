#include <iostream>
using namespace std;

bool palindromeString(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start <= end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }

        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : ";

    cout << str << endl;

    cout << endl;

    int a = palindromeString(str);

    if (a == 1)
    {
        cout << "The given string is a palindrome." << endl;
    }

    else
    {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}