#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        int minimum = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
        cout << endl;
    }

    cout << endl;

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    selection_sort(arr, size);

    cout << "The sorted array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}