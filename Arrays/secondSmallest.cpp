#include <iostream>
#include <climits>
using namespace std;

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

    int smallest = arr[0];

    int secondSmallest = INT_MAX;

    // Find smallest
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is : " << smallest << endl;

    cout << endl;

    // Find second smallest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout << "The second smallest element in the array is : " << secondSmallest << endl;

    return 0;
}