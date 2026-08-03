#include <iostream>
#include <climits>
using namespace std;

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

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is : " << smallest << endl;

    return 0;
}