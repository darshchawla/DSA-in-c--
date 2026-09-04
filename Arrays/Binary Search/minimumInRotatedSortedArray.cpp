#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimum(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int answer = INT_MAX;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[start] <= arr[end]) // Entire array is sorted
        {
            answer = min(answer, arr[start]);
            break;
        }

        else if (arr[start] <= arr[mid])
        {
            answer = min(answer, arr[start]);
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
            answer = min(answer, arr[mid]);
        }
    }

    return answer;
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

    int answer = minimum(arr, size);

    cout << "The minimum element in the array is : " << answer << endl;

    return 0;
}