#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter second number : ";
    cin >> b;

    cout << endl;

    if (a > b)
    {
        cout << a << " is greater." << endl;
    }

    else
    {
        cout << b << " is greater." << endl;
    }

    return 0;
}