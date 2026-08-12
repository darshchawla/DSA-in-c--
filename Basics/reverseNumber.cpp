#include <iostream>
#include <climits>
using namespace std;

int reverse(int n)
{
    int lastDigit;
    int reverse = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10))
        {
            return 0;
        }
        reverse = (reverse * 10) + lastDigit;
        n = n / 10;
    }

    return reverse;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int r = reverse(n);

    cout << "The reverse of the given number is : " << r << endl;

    return 0;
}