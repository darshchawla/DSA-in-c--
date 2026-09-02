#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> majorityElement(vector<int> &nums, int size)
{
    int count1 = 0;
    int count2 = 0;
    int element1 = INT_MIN;
    int element2 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (count1 == 0 && element2 != nums[i])
        {
            count1 = 1;
            element1 = nums[i];
        }
        else if (count2 == 0 && element1 != nums[i])
        {
            count2 = 1;
            element2 = nums[i];
        }
        else if (element1 == nums[i])
        {
            count1++;
        }
        else if (element2 == nums[i])
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    vector<int> answer;
    count1 = 0;
    count2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (element1 == nums[i])
        {
            count1++;
        }
        if (element2 == nums[i])
        {
            count2++;
        }
    }

    int minimum = (int)(size / 3) + 1;
    if (count1 >= minimum)
    {
        answer.push_back(element1);
    }
    if (count2 >= minimum)
    {
        answer.push_back(element2);
    }

    sort(answer.begin(), answer.end());

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