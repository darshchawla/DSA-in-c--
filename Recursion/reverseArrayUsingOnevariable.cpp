#include <iostream>
using namespace std;

void reverseArray(int arr[], int i, int size)
{
    if (i >= size / 2)
        return;
    swap(arr[i], arr[size - i - 1]);
    reverseArray(arr, i + 1, size);
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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    reverseArray(arr, 0, size);

    cout << "Reversed array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}