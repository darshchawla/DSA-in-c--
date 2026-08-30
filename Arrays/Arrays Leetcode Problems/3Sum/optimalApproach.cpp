#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> answer;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                answer.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, 4};

    vector<vector<int>> answer = threeSum(nums);

    cout << "The triplets are : " << endl;

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