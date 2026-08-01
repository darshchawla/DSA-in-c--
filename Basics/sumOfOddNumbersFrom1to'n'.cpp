#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int oddSum = 0;

    for (int i = 1; i <= n; i += 2)
    {
        oddSum = oddSum + i;
    }

    cout << "The sum of all the odd numbers from 1 to " << n << " is : " << oddSum;
    cout << endl;

    return 0;
}