#include <iostream>
using namespace std;

bool palindrome(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    cout<<"Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array of size " << size << " is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int a = palindrome(arr, size);

    if (a == 1)
    {
        cout << "The given array is a palindrome." << endl;
    }

    else
    {
        cout << "The given array is not a palindrome." << endl;
    }

    return 0;
}