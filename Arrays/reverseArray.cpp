#include <iostream>
using namespace std;

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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}