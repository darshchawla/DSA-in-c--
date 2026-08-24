#include <iostream>
using namespace std;

bool palindrome(string &str, int i, int j)
{
    // Base Case
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // Recursive Call
        return palindrome(str, i + 1, j - 1);
    }
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

    int i = 0;
    int j = str.length() - 1;

    bool isPalindrome = palindrome(str, i, j);

    // true = 1 = string is a palindrome
    // false = 0 = string is not a palindrome

    if (isPalindrome == 1)
    {
        cout << "The string is palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}