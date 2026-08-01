#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    if (n <= 1)
    {
        cout << "Neither Prime, Nor Composite." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime Number." << endl;
    }

    else
    {
        cout << "Composite Number." << endl;
    }

    return 0;
}