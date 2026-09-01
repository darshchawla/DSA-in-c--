#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &arr, int size, int k)
{
    int left = 0;
    int right = 0;

    long long sum = arr[0];
    int maximumLength = 0;

    while (right < size)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maximumLength = max(maximumLength, right - left + 1);
        }
        right++;
        if (right < size)
        {
            sum += arr[right];
        }
    }

    return maximumLength;
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