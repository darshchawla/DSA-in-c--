#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArrayElements(vector<int> &arr, int size)
{
    vector<int> answer(size, 0);
    int positiveIndex = 0;
    int negativeIndex = 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            answer[positiveIndex] = arr[i];
            positiveIndex += 2;
        }
        else
        {
            answer[negativeIndex] = arr[i];
            negativeIndex += 2;
        }
    }

    return answer;
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

    vector<int> answer = rearrangeArrayElements(arr, size);

    cout << "The array after rearranging its elements by sign is : { ";

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