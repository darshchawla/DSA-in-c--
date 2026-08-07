#include <iostream>
using namespace std;

int countDigits(int arr[], int number, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count = count + 1;
        }
    }
    return count;
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

    int number;
    cout << "Enter a number to find in the array : ";
    cin >> number;

    cout << endl;

    cout << number << " appears " << countDigits(arr, number, size) << " times in the array." << endl;

    return 0;
}