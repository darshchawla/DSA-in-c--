#include <iostream>
#include <vector>
using namespace std;

vector<int> leaderInArray(vector<int> &nums, int size)
{
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        bool leader = true;

        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] > nums[i])
            {
                leader = false;
                break;
            }
        }
        
        if (leader == true)
        {
            answer.push_back(nums[i]);
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