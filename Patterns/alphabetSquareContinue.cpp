#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    cout << endl;

    int alphabet = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(alphabet + 64) << " ";
            alphabet++;
        }
        cout << endl;
    }
}