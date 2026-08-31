#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {nums[i], nums[j]};
            }
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