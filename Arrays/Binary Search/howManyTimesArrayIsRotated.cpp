#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findRotation(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int answer = INT_MAX;
    int index = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[start] <= arr[end])
        {
            if (arr[start] < answer)
            {
                index = start;
                answer = arr[start];
            }
            break;
        }
        else if (arr[start] <= arr[mid])
        {
            if (arr[start] < answer)
            {
                index = start;
                answer = arr[start];
            }
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            if (arr[mid] < answer)
            {
                index = mid;
                answer = arr[mid];
            }
        }
    }

    return index;
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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int answer = findRotation(arr, size);

    cout << "The array has been rotated " << answer << " times." << endl;

    return 0;
}