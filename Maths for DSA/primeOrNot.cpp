#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)  // Time complexity -> O(n);
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    if (n <= 1)
    {
        cout << "Neither Prime, Nor Composite." << endl;
    }

    else
    {
        int a = isPrime(n);

        if (a == 1)
        {
            cout << "Prime Number." << endl;
        }
        else
        {
            cout << "Composite Number." << endl;
        }
    }

    return 0;
}