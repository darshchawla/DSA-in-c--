#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &answer, int index)
{
    // Base Case
    if (index >= nums.size())
    {
        answer.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, answer, index + 1);
        // Backtracking
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permutations(vector<int> &nums)
{
    vector<vector<int>> answer;
    int index = 0;
    solve(nums, answer, index);
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

    vector<vector<int>> answer = permutations(nums);

    cout << "The permutations of the array are : " << endl;

    for (vector<int> value : answer)
    {
        for (int x : value)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}