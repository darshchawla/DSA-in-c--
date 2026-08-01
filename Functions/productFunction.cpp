#include <iostream>
using namespace std;

int product(int a, int b) // parameters
{
    int p = a * b;
    cout << "The product of the two numbers is : " << p << endl;
    return p;
}

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

    product(a, b);

    return 0;
}