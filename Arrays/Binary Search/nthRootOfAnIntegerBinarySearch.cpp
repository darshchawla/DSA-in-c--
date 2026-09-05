#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int nthRoot(int m, int n)
{
    int low = 1;
    int high = m;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int value = pow(mid, n);

        if (value == m)
        {
            return mid;
        }
        else if (value < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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