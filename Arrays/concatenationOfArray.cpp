#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(vector<int> &arr, int size)
{
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        answer.push_back(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        answer.push_back(arr[i]);
    }

    return answer;
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

    vector<int> answer = concatenation(arr, size);

    cout << "The concatenation of the array is : { ";

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