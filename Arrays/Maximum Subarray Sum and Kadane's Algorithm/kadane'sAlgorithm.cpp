#include <iostream>
#include <vector>
#include <climits>
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
    int sum = 0;

    for (int start = 0; start < size; start++)
    {
        sum += arr[start];

        if (sum > maxSum)
        {
            maxSum = sum;
        }

        // maxSum=max(maxSum,sum);

        if (sum < 0)
        {
            sum = 0;
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
    cout << endl;

    cout << "The subarrays are : " << endl;

    printSubarrays(arr, size);

    cout << endl;

    int answer = maximumSubarraySum(arr, size);

    cout << "The maximum subarray sum is : " << answer << endl;

    return 0;
}