#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n).

vector<int> rightRotate(vector<int> &nums, int size)
{
    int temp = nums[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = temp;

    return nums;
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

    cout << " }";
    cout << endl;
    cout << endl;

    vector<int> answer = rightRotate(nums, size);

    cout << "The array after right rotate is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i];

        if (i != answer.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;

    return 0;
}