#include <iostream>
using namespace std;

void table()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Table of " << i << " : ";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

int main()
{
    table();

    return 0;
}