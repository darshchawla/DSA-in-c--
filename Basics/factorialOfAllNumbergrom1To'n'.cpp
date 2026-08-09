#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int product = 1;

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        product = product * i;
        cout << "The factorial of " << a << " is : " << product << endl;
        a = a + 1;
        cout << endl;
    }

    return 0;
}