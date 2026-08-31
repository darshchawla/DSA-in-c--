#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n).

bool checkSorted(vector<int> &arr, int size)
{

    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            
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
    cout << "Enter the size of array : ";
    cin >> size;

    cout << endl;

    vector<int> arr(size);

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

    int isSorted = checkSorted(arr, size);

    if (isSorted == true)
    {
        cout << "The array is sorted." << endl;
    }

    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}