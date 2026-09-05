#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int nthRoot(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        int value = pow(i, n);

        if (value == m)
        {
            return i;
        }
        else if (value > m)
        {
            break;
        }
    }

    return -1;
}

int main()
{
    int m;
    cout << "Enter m : ";
    cin >> m;

    cout << endl;

    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << endl;

    int answer = nthRoot(m, n);

    cout << n << " th root " << m << " is : " << answer << endl;

    return 0;
}