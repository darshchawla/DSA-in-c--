#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
        else if (i == size - 1)
        {
            if (arr[i] != arr[i - 1])
            {
                return arr[i];
            }
        }
        else
        {
            if (arr[i - 1] != arr[i] && arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> arr(size);

    cout << endl;

    cout << "Enter all the element of the array : ";

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

    int answer = singleElement(arr, size);

    cout << "The single element in the array is : " << answer << endl;

    return 0;
}