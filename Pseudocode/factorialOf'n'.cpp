#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int product = 1;
    int count = 1;
    while (count <= n)
    {
        product = product * count;
        count += 1;
    }
    cout << "The factorial of " << n << " is : " << product << endl;
}