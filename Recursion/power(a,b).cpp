#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0) // Base Case
        return 1;

    if (b == 1) // Base Case
        return a;

    int answer = power(a, b / 2);

    if (b % 2 == 0)
    {
        return answer * answer;
    }
    else
    {
        return a * answer * answer;
    }
}

int main()
{
    int a;
    cout << "Enter base : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter exponent : ";
    cin >> b;

    cout << endl;

    int c = power(a, b);

    cout << a << " raised to the power " << b << " is : " << c << endl;

    return 0;
}