#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) // Found
        {
            return i;
        }
    }
    return -1; // Not Found
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

    int target;
    cout << "Enter a target to search : ";
    cin >> target;

    cout << endl;

    int a = linearSearch(arr, size, target);

    if (a != -1)
    {
        cout << "Element found at index : " << a << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}