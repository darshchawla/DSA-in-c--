#include <bits/stdc++.h>
using namespace std;

void print(int l)
{
    int start = 1;
    for (int i = 0; i < l; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    int l;
    cout << "Enter number of lines : ";
    cin >> l;

    print(l);
}