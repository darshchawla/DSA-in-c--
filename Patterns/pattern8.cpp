#include <bits/stdc++.h>
using namespace std;

void print(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * l - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int l;
    cout << "Enter number of lines : ";
    cin >> l;

    cout << endl;

    print(l);
}