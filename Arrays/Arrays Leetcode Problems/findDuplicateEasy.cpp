#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int answer = findDuplicate(arr, size);

    cout << "The duplicate element in the array is : " << answer << endl;

    return 0;
}