#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    if (n == 1 || n == 2)
    {
        return n;
    }

    int totalWays = climbStairs(n - 1) + climbStairs(n - 2);
    return totalWays;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int ways = climbStairs(n);

    cout << "There are " << ways << " to climb the stairs." << endl;

    return 0;
}