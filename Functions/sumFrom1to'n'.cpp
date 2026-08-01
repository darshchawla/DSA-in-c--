#include <iostream>
using namespace std;

void sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << "The sum from 1 to " << n << " is : " << s << endl;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    sum(n);

    return 0;
}