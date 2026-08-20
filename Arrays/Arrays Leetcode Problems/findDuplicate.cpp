#include <iostream>
using namespace std;

int duplicateElement(int arr[], int size)
{
    int answer = 0;

    for (int i = 0; i < size; i++)
    {
        answer = answer ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        answer = answer ^ i;
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    // Number from 1 to size - 1

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

    int answer = duplicateElement(arr, size);

    cout << "The duplicate element in the array is : " << answer << endl;

    return 0;
}