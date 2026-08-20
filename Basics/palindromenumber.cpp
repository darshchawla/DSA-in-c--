#include <iostream>
using namespace std;

bool palindrome(int n)
{
    if (n < 0)
    {
        return false;
    }
    int original = n;

    int lastDigit;
    int reverse = 0;

    while (n > 0)
    {
        lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    if (reverse == original)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int a = palindrome(n);

    if (a == 1)
    {
        cout << "The given number is a palindrome." << endl;
    }

    else
    {
        cout << "The given number is not a palindrome." << endl;
    }

    return 0;
}