#include <iostream>
#include <string>
using namespace std;

bool palindrome(string &str, int i)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    return palindrome(str, i + 1);
}

int main()
{
    string str = "radar";

    cout << endl;

    cout << palindrome(str, 0);

    // true = 1 = string is a palindrome
    // false = 0 = string is not a palindrome

    return 0;
}