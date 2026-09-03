#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> &arr, int size, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return bs(arr, size, mid + 1, end, target);
    }
    else
    {
        return bs(arr, size, start, mid - 1, target);
    }
}

int binarySearch(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    return bs(arr, size, start, end, target);
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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    int answer = binarySearch(arr, size, target);

    if (answer != -1)
    {
        cout << "Element found at index " << answer << "." << endl;
    }

    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}