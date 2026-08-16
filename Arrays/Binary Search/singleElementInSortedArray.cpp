#include <iostream>
using namespace std;

int singleElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    if (size == 1)
    {
        return arr[0];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == 0 && arr[0] != arr[1])
        {
            return arr[mid];
        }
        if (arr[mid] == size - 1 && arr[size - 1] != arr[size - 2])
        {
            return arr[mid];
        }
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }

        if (mid % 2 == 0) // even
        {
            if (arr[mid - 1] == arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else // odd
        {
            if (arr[mid - 1] == arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
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

    cout << "Enter all the element of the array : ";

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

    int a = singleElement(arr, size);

    cout << "The single element in the array is : " << a << endl;

    return 0;
}