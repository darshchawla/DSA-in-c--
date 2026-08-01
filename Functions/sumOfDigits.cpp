#include <iostream>
using namespace std;

void sumOfDigits(int n)
{
    int lastDigit;
    int digitSum = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        digitSum = digitSum + lastDigit;
    }
    cout << "The sum of digits of the number is : " << digitSum << endl;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    sumOfDigits(n);

    return 0;
}