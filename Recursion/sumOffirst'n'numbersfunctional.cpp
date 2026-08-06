#include <iostream>
using namespace std;

int sumOfNumbers(int n)
{
    if (n == 0)
        return 0;
    int sum = n + sumOfNumbers(n - 1);
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    cout << "The sum of the first " << n << " numbers is : ";

    int sum = sumOfNumbers(n);

    cout << sum << endl;

    return 0;
}