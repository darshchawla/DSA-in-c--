#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> &arr, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }

    return false;
}

int longestSequence(vector<int> &arr, int size)
{
    int longest = 1;

    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        int count = 1;

        while (linearSearch(arr, size, x + 1) == true)
        {
            x = x + 1;
            count = count + 1;
        }

        longest = max(longest, count);
    }

    return longest;
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

    int answer = longestSequence(arr, size);

    cout << "The longest consecutive sequence is : " << answer << endl;

    return 0;
}