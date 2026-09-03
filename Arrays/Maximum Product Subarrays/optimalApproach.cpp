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

int maximumProductSubarray(vector<int> &arr, int size)
{
    int maximumProduct = INT_MIN;
    int prefix = 1;
    int suffix = 1;

    for (int i = 0; i < size; i++)
    {
        if (prefix == 0)
        {
            prefix = 1;
        }
        if (suffix == 0)
        {
            suffix = 1;
        }
        prefix = prefix * arr[i];
        suffix = suffix * arr[size - i - 1];

        maximumProduct = max(maximumProduct, max(prefix, suffix));
    }

    return maximumProduct;
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

    int answer = maximumProductSubarray(arr, size);

    cout << "The maximum product subarray is : " << answer << endl;

    return 0;
}