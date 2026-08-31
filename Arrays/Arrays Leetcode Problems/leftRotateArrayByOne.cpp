#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n).

vector<int> leftRotate(vector<int> &nums, int size)
{
    int temp = nums[0];

    for (int i = 1; i < size; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[size - 1] = temp;

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
        cout << nums[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    vector<int> answer = leftRotate(nums, size);

    cout << "The array after left rotate is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }

    cout << "}";
    cout << endl;

    return 0;
}