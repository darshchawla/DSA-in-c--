#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums, int size)
{
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        if (answer.size() == 0 || answer[0] != nums[i])
        {
            int count = 0;

            for (int j = 0; j < size; j++)
            {
                if (nums[j] == nums[i])
                {
                    count++;
                }
            }

            if (count > (size / 3))
            {
                answer.push_back(nums[i]);
            }
        }
        if (answer.size() == 2)
        {
            break;
        }
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;

    cout << endl;

    vector<int> nums(size);

    cout << "Enter all the elements of the vector : ";

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

    cout << " }";
    cout << endl;
    cout << endl;

    vector<int> answer = majorityElement(nums, size);

    cout << "The majority element in the array is : { ";

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