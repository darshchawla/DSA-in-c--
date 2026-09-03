#include <iostream>
using namespace std;

bool search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return true;
        }

        if (arr[start] == arr[mid] && arr[mid] == arr[end])
        {
            start++;
            end--;
            continue;
        }

        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return false;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];

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
    cout << "Enter a target to search : ";
    cin >> target;

    cout << endl;

    int answer = search(arr, size, target);

    if (answer == 1)
    {
        cout << "Element is present in the array." << endl;
    }

    else
    {
        cout << "No element found." << endl;
    }

    return 0;
}