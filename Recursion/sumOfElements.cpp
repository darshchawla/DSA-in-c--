#include <iostream>
using namespace std;

int sumOfElements(int arr[], int size)
{

    int sum = 0;

    // Base Case
    if (size == 1)
    {
        return arr[0];
    }

    int answer = sumOfElements(arr + 1, size - 1);

    return arr[0] + answer;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int a = sumOfElements(arr, size);

    cout << "The sum of elements of the array is : " << a << endl;

    return 0;
}