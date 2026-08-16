#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    int answer = -1;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            answer = mid;
            end = mid - 1;
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

    return answer;
}

int lastOccurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    int answer = -1;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            answer = mid;
            start = mid + 1;
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

    return answer;
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
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    int a = firstOccurrence(arr, size, target);

    int b = lastOccurrence(arr, size, target);

    cout << "The first and last occurrence of the element " << target << " is at indices : " << "(" << a << ", " << b << ")" << endl;

    cout << endl;

    int totalOccurrence = (b - a) + 1;

    cout << "The total number of occurrences of " << target << " is : " << totalOccurrence << endl;

    return 0;
}