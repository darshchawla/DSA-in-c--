#include <iostream>
using namespace std;

int uniqueElement(int arr[], int size)
{
    int answer = 0;

    for (int i = 0; i < size; i++)
    {
        answer = answer ^ arr[i];
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
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

    int answer = uniqueElement(arr, size);

    cout << "The unique element in the array is : " << answer << endl;

    return 0;
}
