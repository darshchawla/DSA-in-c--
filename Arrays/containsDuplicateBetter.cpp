#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &arr, int size)
{
    sort(arr.begin(), arr.end());

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true;
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