#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Time Complexity -> O(n).

int main()
{
    int size;
    cout << "Enter the size of array: ";
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

    int largest = arr[0];

    int secondLargest = INT_MIN;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element in the array is : " << secondLargest << endl;

    return 0;
}