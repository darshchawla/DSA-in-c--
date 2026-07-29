#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    int r = a + b;
    return r;
}

// void sum(int a, int b)
// {
//     int result = a + b;
//     cout << "The sum of the two numbers is : " << result << endl;
// }

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

    int result = sum(a, b);
    cout << "The sum of the two numbers is : " << result << endl;

    // sum(a, b);
}