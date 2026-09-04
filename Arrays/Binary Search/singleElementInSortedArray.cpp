#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    if (arr[0] != arr[1])
    {
        return arr[0];
    }
    if (arr[size - 1] != arr[size - 2])
    {
        return arr[size - 1];
    }

    int start = 1;
    int end = size - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }
        if ((mid % 2 == 1 && arr[mid - 1] == arr[mid]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) // Standing of left half
        {
            start = mid + 1; // Eliminate the left half.
        }

        else // Standing on right half
        {
            end = mid - 1; // Eliminate the right half
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

    cout << "Enter all the element of the array : ";

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

    int answer = singleElement(arr, size);

    cout << "The single element in the array is : " << answer << endl;

    return 0;
}