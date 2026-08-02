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

    int c = (a ^ b);
    cout << "The bitwise ^ of " << a << " and " << b << " is : " << c << endl;

    return 0;
}