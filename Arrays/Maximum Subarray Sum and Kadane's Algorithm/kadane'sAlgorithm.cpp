#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The subarrays are : " << endl;

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "The maximum subarray sum is : ";

    int maxSum = INT_MIN;

    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;
        for (int end = start; end < size; end++)
        {
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
            
            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
    }

    cout << maxSum;

    cout << endl;

    return 0;
}