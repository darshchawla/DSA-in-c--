#include <iostream>
#include <vector>
using namespace std;

vector<int> firstAndLast(vector<int> &arr, int size, int target)
{
    int first = -1;
    int last = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }

    return {first, last};
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

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    vector<int> answer = firstAndLast(arr, size, target);

    cout << "The first and last occurrence of the element " << target << " is at indices : { ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
        if (i != answer.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;

    return 0;
}