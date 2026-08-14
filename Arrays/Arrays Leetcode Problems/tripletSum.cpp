#include <iostream>
#include <vector>
using namespace std;

vector<int> tripletSum(vector<int> &arr, int size, int target)
{
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {

                    answer.push_back(arr[i]);
                    answer.push_back(arr[j]);
                    answer.push_back(arr[k]);

                    return answer;
                }
            }
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

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
        cout << endl;
    }

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

    vector<int> answer = tripletSum(arr, size, target);

    if (answer.empty())
    {
        cout << "No triplets found.";
    }
    else
    {
        cout << "The triplet with targeted sum " << target << " is : ";

        cout << "(";

        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << ",";
        }

        cout << ")";
    }

    cout << endl;

    return 0;
}