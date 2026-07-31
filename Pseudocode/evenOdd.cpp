#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;

    cout << endl;

    if (a % 2 == 0)
    {
        cout << "Even Number." << endl;
    }
    else
    {
        cout << "Odd Number." << endl;
    }
}