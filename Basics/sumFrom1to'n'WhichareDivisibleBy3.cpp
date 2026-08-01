#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "The sum of all the number from 1 to " << n << " which are divisible by 3 are : " << sum;
    cout << endl;

    return 0;
}