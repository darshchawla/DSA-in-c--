#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;

    cout << endl;

    int c;
    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}