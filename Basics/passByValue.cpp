#include <bits/stdc++.h>
using namespace std;

// pass by value
void print(int a)
{
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a += 5;
    cout << a << endl;
}
int main()
{
    int a = 10;

    print(a);

    cout << a << endl;
}