#include <bits/stdc++.h>
using namespace std;

void print(int l)
{
    for (int i = 1; i <= 2 * l - 1; i++)
    {
        int stars = i;
        if (i > l)
            stars = 2 * l - i;
        for (int j = 1; j <= stars; j++)
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