#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr, int size)
{
    if (size == 0)
    {
        return arr[0];
    }
    if (arr[0] > arr[1])
    {
        return arr[0];
    }
    if (arr[size - 1] > arr[size - 2])
    {
        return arr[size - 1];
    }

    int start = 1;
    int end = size - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int peakIndex(vector<int> &arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[size - 1] > arr[size - 2])
    {
        return size - 1;
    }

    int start = 1;
    int end = size - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> arr(size);

    cout << endl;

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

    int answer1 = peakElement(arr, size);

    cout << "The peak element is : " << answer1 << endl;

    cout << endl;

    int answer2 = peakIndex(arr, size);

    cout << "The index of peak element is : " << answer2 << endl;

    return 0;
}