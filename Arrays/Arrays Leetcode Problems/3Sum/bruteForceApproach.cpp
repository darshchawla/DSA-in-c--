#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> answer;
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());

                    if (s.find(triplet) == s.end())
                    {
                        s.insert(triplet);
                        answer.push_back(triplet);
                    }
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

    cout << "The triplets are : ";

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