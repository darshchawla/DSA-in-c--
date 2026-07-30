#include <bits/stdc++.h>
using namespace std;

void print(int l)
{
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            cout << "* ";
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