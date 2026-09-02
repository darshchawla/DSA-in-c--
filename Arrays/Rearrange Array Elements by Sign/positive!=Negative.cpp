#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArrayElements(vector<int> &arr, int size)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }

    if (positive.size() > negative.size())
    {
        for (int i = 0; i < negative.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }

        int index = negative.size() * 2;
        for (int i = negative.size(); i < positive.size(); i++)
        {
            arr[index] = positive[i];
            index++;
        }
    }

    else
    {
        for (int i = 0; i < negative.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }

        int index = positive.size() * 2;
        for (int i = positive.size(); i < negative.size(); i++)
        {
            arr[index] = negative[i];
            index++;
        }
    }

    return arr;
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
    cout << endl;

    return 0;
}