#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int size)
{
    vector<int> answer;

    answer.push_back(arr[0]);

    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            answer.push_back(arr[i]);
        }
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

    cout << "Enter all the elemets of the array : ";

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

    vector<int> answer = removeDuplicate(arr, size);

    cout << "The array after removing all the duplicate elements is : ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl;

    return 0;
}