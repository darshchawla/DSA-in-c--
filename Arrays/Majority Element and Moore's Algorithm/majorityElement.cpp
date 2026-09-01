#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
        }
        if (count > (size / 2))
        {
            return nums[i];
        }
    }

    return -1;
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

    int answer = majorityElement(nums, size);

    cout << "The majority element in the array is : " << answer << endl;

    return 0;
}