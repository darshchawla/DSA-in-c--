#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    cout << "The array in function is : ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
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

    cout << "The array of size " << size << " is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    changeArray(arr, size);

    cout << "The array in main function is : ";

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}