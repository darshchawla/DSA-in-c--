#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> leaderInArray(vector<int> &nums, int size)
{
    vector<int> answer;
    int maximum = INT_MIN;

    for (int i = size - 1; i >= 0; i--)
    {
        if (nums[i] > maximum)
        {
            answer.push_back(nums[i]);
        }
        maximum = max(maximum, nums[i]);
    }

    reverse(answer.begin(), answer.end());

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> nums(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i];

        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << "}";
    cout << endl;
    cout << endl;

    vector<int> answer = leaderInArray(nums, size);

    cout << "The leaders in the array is/are : { ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];

        if (i != answer.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << " }" << endl;

    return 0;
}