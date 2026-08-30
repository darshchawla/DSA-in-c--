#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{

    vector<vector<int>> answer;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < nums.size(); j++)
        {

            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int a = j + 1;
            int b = nums.size() - 1;

            while (a < b)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[a] + (long long)nums[b];

                if (sum < target)
                {
                    a++;
                }
                else if (sum > target)
                {
                    b--;
                }
                else
                {
                    answer.push_back({nums[i], nums[j], nums[a], nums[b]});
                    a++;
                    b--;

                    while (a < b && nums[a] == nums[a - 1])
                        a++;
                }
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, 4};

    int target;
    ;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    vector<vector<int>> answer = fourSum(nums, target);

    cout << "The 4 sum is : " << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "[ ";

        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
            cout << ", ";
        }

        cout << "]" << endl;
    }

    return 0;
}