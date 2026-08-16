#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];

    cout << endl;

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

    int a = peakIndex(arr, size);

    cout << "The peak index in the mountain array is : " << a << endl;

    return 0;
}