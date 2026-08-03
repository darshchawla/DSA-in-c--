#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int lastDigit;
    int reverse = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        reverse = (reverse * 10) + lastDigit;
        n = n / 10;
    }
    cout << "The reverse of the given number is : " << reverse << endl;

    return 0;
}