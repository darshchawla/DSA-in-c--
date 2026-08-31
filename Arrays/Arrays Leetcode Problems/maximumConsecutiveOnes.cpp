#include <iostream>
#include <vector>
using namespace std;

int maxOnes(vector<int> &nums, int size)
{
    int count = 0;

    int maximum = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 0;
        }
    }

    return maximum;
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
        cout << nums[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    int answer = maxOnes(nums, size);

    cout << "The maximum number of ones is : " << answer << endl;

    return 0;
}