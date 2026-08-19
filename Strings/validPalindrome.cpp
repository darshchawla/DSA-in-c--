#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    return false;
}

bool validPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        if (!isAlphaNumeric(str[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNumeric(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }

        start++;
        end--;
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

    int a = validPalindrome(str);

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