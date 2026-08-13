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

int nPr(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(n - r);

    int nPr = numerator / denominator;

    return nPr;
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

    int answer = nPr(n, r);

    cout << "The answer is : " << answer << endl;

    return 0;
}