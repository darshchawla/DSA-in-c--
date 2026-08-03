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

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is : " << largest << endl;

    return 0;
}