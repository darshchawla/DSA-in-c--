#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number += 1;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of lines : ";
    cin >> n;

    print(n);
}