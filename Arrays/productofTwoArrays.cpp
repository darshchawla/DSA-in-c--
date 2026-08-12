#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of both the arrays : ";
    cin >> size;

    cout << endl;

    int arr[size];

    cout << "Enter all the elements of the first array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The first array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int brr[size];

    cout << "Enter all the elements of the second array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> brr[i];
    }

    cout << endl;

    cout << "The second array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int crr[size];

    for (int i = 0; i < size; i++)
    {
        crr[i] = arr[i] * brr[i];
    }

    cout << "The product of both the array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;

    return 0;
}