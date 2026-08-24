#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    int length1 = (mid - start) + 1;

    int length2 = end - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    // copy values
    int mainArrayIndex = start;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = start;

    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }
    while (index1 < length1)
    {
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }
    while (index2 < length2)
    {
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }
}

void merge_Sort(int arr[], int size, int start, int end)
{

    // Base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // sorting left part
    merge_Sort(arr, size, start, mid);

    // sorting right part
    merge_Sort(arr, size, mid + 1, end);

    // merge
    merge(arr, start, end);
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

    int start = 0;
    int end = size - 1;

    merge_Sort(arr, size, start, end);

    cout << "The sorted array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}