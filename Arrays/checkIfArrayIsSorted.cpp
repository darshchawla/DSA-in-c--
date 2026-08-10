#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
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

    bool isSorted = true;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted == true)
    {
        cout << "The array is sorted." << endl;
    }

    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}