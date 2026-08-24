#include <iostream>
using namespace std;

void printArray(int arr[], int start, int end, int size)
{
    cout << "Size of the array is : " << size << endl;

    cout << "Elements are : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;
}

bool binarySearch(int arr[], int start, int end, int size, int target)
{
    printArray(arr, start, end, size);

    // Base Case
    // element not found
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    // element found
    if (arr[mid] == target)
    {
        return true;
    }

    if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, size, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, size, target);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

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

    int target;
    cout << "Enter a target to search in the array : ";
    cin >> target;

    cout << endl;

    int start = 0;
    int end = size - 1;

    bool answer = binarySearch(arr, start, end, size, target);

    if (answer == 1)
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}