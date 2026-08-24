#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    // Base Case -> already sorted
    if (size == 0 || size == 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    bubble_sort(arr, size - 1);
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

    bubble_sort(arr, size);

    cout << "The sorted array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}