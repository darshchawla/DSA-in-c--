#include <bits/stdc++.h>
using namespace std;

double power(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binaryForm = n;
    if (n < 0)
    {
        x = 1 / x;
        binaryForm = -binaryForm;
    }
    double answer = 1;

    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)
        {
            answer *= x;
        }
        x *= x;
        binaryForm /= 2;
    }

    return answer;
}

int main()
{
    double x;
    cout << "Enter base : ";
    cin >> x;

    cout << endl;

    int n;
    cout << "Enter power/exponent : ";
    cin >> n;

    cout << endl;

    double answer = power(x, n);

    cout << x << " raised to the power " << n << " is : " << answer << endl;

    return 0;
}