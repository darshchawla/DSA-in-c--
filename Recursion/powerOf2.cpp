#include <iostream>
using namespace std;

int powerOf2(int e)
{
    if (e == 1)
        return 2;
    int p = 2 * powerOf2(e - 1);
    return p;
}

int main()
{
    int e;
    cout << "Enter an exponent of 2 : ";
    cin >> e;

    cout << endl;

    int answer = powerOf2(e);

    cout << "2 raised to the power " << e << " is : " << answer << endl;
    return 0;
}