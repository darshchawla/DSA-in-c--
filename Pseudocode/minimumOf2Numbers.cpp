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

    if (a < b)
    {
        cout << "The minimum number is : " << a << endl;
    }
    else
    {
        cout << "The minimum number is : " << b << endl;
    }
}