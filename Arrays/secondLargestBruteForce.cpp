#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLargest(vector<int> &arr, int size)
{
    sort(arr.begin(), arr.end());

    int largest = arr[size - 1];

    int secondLargest;

    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }

    return secondLargest;
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

    int answer = secondLargest(arr, size);

    cout << "The second largest element in the array is : " << answer << endl;

    return 0;
}