#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &arr, int size, int k)
{
    int longestLength = 0;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                longestLength = max(longestLength, j - i + 1);
            }
        }
    }

    return longestLength;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << endl;

    vector<int> arr(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

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
            cout << "{ ";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "}   ";
        }
        cout << endl;
    }

    cout << endl;

    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << endl;

    int answer = longestSubarray(arr, size, k);

    cout << "The longest subarray sum equals to " << k << " is : " << answer << endl;

    return 0;
}