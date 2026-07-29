#include <bits/stdc++.h>
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

    int minimum = min(a, b);
    cout << "The minimum number between the two given numbers is : " << minimum << endl;
}