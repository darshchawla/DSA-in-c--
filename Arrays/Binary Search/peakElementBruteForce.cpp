#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++) // Time Complexity -> O(n).
    {
        if ((i == 0 || arr[i - 1] < arr[i]) && (i == size - 1 || arr[i] > arr[i + 1]))
        {
            return i;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> arr(size);

    cout << endl;

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

    int answer = peakElement(arr, size);

    cout << "The index of peak element is : " << answer << endl;

    return 0;
}