#include <iostream>
using namespace std;

int addDigits(int n)
{
    while (n >= 10)
    {
        int sum = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            sum += lastDigit;
            n = n / 10;
        }
        n = sum;
    }

    return n;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int a = addDigits(n);

    cout << "The answer after repeatedly adding digits of the number " << n << " is : " << a << endl;

    return 0;
}