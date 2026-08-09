#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : ";
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

    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates : ";

    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}