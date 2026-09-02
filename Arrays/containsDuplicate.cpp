#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> arr(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    int answer = containsDuplicate(arr, size);

    if (answer == 1)
    {
        cout << "The array contains duplicate elements." << endl;
    }
    else
    {
        cout << "The array does not contains duplicate elements." << endl;
    }

    return 0;
}