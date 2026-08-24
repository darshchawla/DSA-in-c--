#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
        return a;

    int p = a * power(a, b - 1);
    return p;
}

int main()
{
    int a;
    cout << "Enter base : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter exponent : ";
    cin >> b;

    cout << endl;

    int c = power(a, b);

    cout << a << " raised to the power " << b << " is : " << c << endl;

    return 0;
}