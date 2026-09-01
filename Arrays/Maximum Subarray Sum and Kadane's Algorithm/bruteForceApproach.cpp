#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void printSubarrays(vector<int> &arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "{ ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "}   ";
        }
        cout << endl;
    }
}

int maximumSubarraySum(vector<int> &arr, int size)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> arr(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];

        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;

    cout << "The subarrays are : " << endl;

    printSubarrays(arr, size);

    cout << endl;

    int answer = maximumSubarraySum(arr, size);

    cout << "The maximum subarray sum is : " << answer << endl;

    return 0;
}