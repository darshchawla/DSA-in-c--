#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n - r);

    int nCr = numerator / denominator;

    return nCr;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << endl;

    int r;
    cout << "Enter r : ";
    cin >> r;

    cout << endl;

    int answer = nCr(n, r);

    cout << "The answer is : " << answer << endl;

    return 0;
}