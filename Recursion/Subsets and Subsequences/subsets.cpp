#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &answer, vector<int> output, int index)
{
    // Base Case
    if (index >= nums.size())
    {
        answer.push_back(output);
        return;
    }

    // Exclude
    solve(nums, answer, output, index + 1);

    // Include
    int element = nums[index];
    output.push_back(element);
    solve(nums, answer, output, index + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> answer;
    vector<int> output;
    int index = 0;
    solve(nums, answer, output, index);
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

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    cout << endl;

    vector<vector<int>> answer = subsets(nums);

    cout << "The subsets are : " << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "{ ";

        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}