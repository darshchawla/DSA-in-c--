#include <iostream>
using namespace std;

int product(int n)
{
    if (n == 1)
        return 1;
    int p = n * product(n - 1);
    return p;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    cout << "The factorial of " << n << " is : ";

    int factorial = product(n);

    cout << factorial << endl;

    return 0;
}