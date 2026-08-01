#include <iostream>
using namespace std;

void factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout << "The factorial of " << n << " is : " << f << endl;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    factorial(n);

    return 0;
}