#include <bits/stdc++.h>
using namespace std;

void printup(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < l - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printdown(int l)
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

    printup(l);

    printdown(l);
}