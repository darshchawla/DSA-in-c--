#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &nums, int size, int target)
{
    sort(nums.begin(), nums.end());

    vector<int> answer;

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum == target)
        {
            answer.push_back(nums[i]);
            answer.push_back(nums[j]);

            return answer;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return {};
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
        cout << nums[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    vector<int> answer = twoSum(nums, size, target);

    cout << "The pair with targeted sum " << target << " is : { ";

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