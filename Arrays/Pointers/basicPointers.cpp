#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;

    int* ptr = &a; // Single pointer

    int** ptr2 = &ptr; // Double pointer

    cout << &a << endl;

    cout << ptr << endl;

    cout << *ptr2 << endl;

    cout << &ptr << endl;

    cout << ptr2 << endl;

    cout << *ptr << endl; // * -> Dereference operator

    cout << **ptr2 << endl;

    cout << &ptr2 << endl;

    return 0;
}