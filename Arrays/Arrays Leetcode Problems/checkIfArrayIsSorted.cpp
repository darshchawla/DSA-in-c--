#include <iostream>
#include <vector>
using namespace std;

bool sorted_rotated(vector<int> &nums, int size)
{
    int count = 0;

    for (int i = 1; i < size; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    if (nums[size - 1] > nums[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> nums(size);

    cout << endl;

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

    bool a = sorted_rotated(nums, size);

    if (a)
    {
        cout << "The array is sorted and rotated." << endl;
    }

    else
    {
        cout << "The array is not sorted and rotated." << endl;
    }

    return 0;
}