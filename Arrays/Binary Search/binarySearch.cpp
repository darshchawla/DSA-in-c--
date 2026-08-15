#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
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

    int target;
    cout << "Enter a target to search : ";
    cin >> target;

    cout << endl;

    int a = binarySearch(arr, size, target);

    if (a != -1)
    {
        cout << "Element found at index " << a << "." << endl;
    }

    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}