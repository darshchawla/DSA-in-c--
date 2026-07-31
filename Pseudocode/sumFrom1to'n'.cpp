#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int sum = 0;
    int count = 1;
    while (count <= n)
    {
        sum = sum + count;
        count += 1;
    }
    cout << "The sum of numbers from 1 to " << n << " is : " << sum << endl;
}