#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int evenSum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
    }

    cout << "The sum of all the even numbers from 1 to " << n << " is : " << evenSum;
    cout << endl;

    return 0;
}