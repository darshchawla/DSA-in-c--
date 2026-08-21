#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    int result = 1;

    while (n > 0)
    {
        if (n % 2 == 1) // odd
        {
            result = ( 1LL * (result) * (x) % m) % m;
        }
        x = ( 1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }

    return result;
}

int main()
{
    // To find -> (x ^ n) % m
    int x = 7;
    int n = 5;
    int m = 2;

    int a = modularExponentiation(x, n, m);

    cout << "The answer is : " << a << endl;

    return 0;
}