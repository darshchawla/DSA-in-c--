#include <iostream>
#include <vector>
using namespace std;

int countSubarrays(vector<int> &arr, int size, int k)
{
    int longestLength = 0;
    int count=0;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = i; j < size; j++)
        {
            sum+=arr[j];

            if (sum == k)
            {
                count++;
            }
        }
    }

    return count;
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

    int answer = countSubarrays(arr, size, k);

    cout << "The number of subarrays whose sum is equals to " << k << " are : " << answer << endl;

    return 0;
}