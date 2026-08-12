#include <bits/stdc++.h>
using namespace std;

int positive(int arr[], int size)
{
    int positiveCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
    }

    return positiveCount;
}

int negative(int arr[], int size)
{
    int negativeCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negativeCount++;
        }
    }

    return negativeCount;
}

int zeroes(int arr[], int size)
{
    int zeroes = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
    }

    return zeroes;
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

    int count1 = positive(arr, size);

    cout << "There are " << count1 << " positive elements in the array." << endl;

    cout << endl;

    int count2 = negative(arr, size);

    cout << "There are " << count2 << " negative elements in the array." << endl;

    cout << endl;

    int count3 = zeroes(arr, size);

    cout << "There are " << count3 << " zeroes in the array." << endl;

    return 0;
}