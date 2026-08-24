#include <iostream>
using namespace std;

long long int binarySearch(int x)
{
    int start = 0;
    int end = x;

    long long int answer = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if (square == x)
        {
            return mid;
        }
        if (square < x)
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return answer;
}

int mySqrt(int x)
{
    return binarySearch(x);
}

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    cout << endl;

    int answer = mySqrt(x);

    cout << "The square root of " << x << " is : " << answer << endl;

    return 0;
}