#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Size of array is : " << size << endl;

    cout << "Elements are : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;
}

bool linearSearch(int arr[], int size, int target)
{
    printArray(arr, size);

    // Base Case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        bool answer = linearSearch(arr + 1, size - 1, target);
        return answer;
    }
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

    int target;
    cout << "Enter a target to search in the array : ";
    cin >> target;

    cout << endl;

    bool answer = linearSearch(arr, size, target);

    if (answer == 1)
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}