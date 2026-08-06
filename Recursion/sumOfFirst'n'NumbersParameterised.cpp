#include <iostream>
using namespace std;

void sumOfNumbers(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumOfNumbers(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    cout << "The sum of the first " << n << " numbers is : ";

    sumOfNumbers(n, 0);

    cout << endl;

    return 0;
}