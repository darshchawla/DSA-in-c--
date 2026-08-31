#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestElement(vector<int> &arr, int size)
{
    sort(arr.begin(), arr.end());

    return arr[size - 1];
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

    cout << "The array of size " << size << " is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int answer = largestElement(arr, size);

    cout << "The largest element in the array is : " << answer << endl;

    return 0;
}