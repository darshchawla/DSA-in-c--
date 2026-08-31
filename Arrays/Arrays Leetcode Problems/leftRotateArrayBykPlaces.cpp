#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(k) + O(n - k) + O(k) = O(n + k) // n = size.

vector<int> rotateArrays(vector<int> &nums, int size, int k)
{
    vector<int> temp;

    k = k % size;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(nums[i]);
    }

    for (int i = k; i < size; i++)
    {
        nums[i - k] = nums[i];
    }

    for (int i = size - k; i < size; i++)
    {
        nums[i] = temp[i - (size - k)];
    }

    return nums;
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

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    int k;
    cout << "Enter number of positions to rotate the array : ";
    cin >> k;

    cout << endl;

    vector<int> answer = rotateArrays(nums, size, k);

    cout << "The rotated array is : { ";

    for (int value : nums)
    {
        cout << value << ", ";
    }

    cout << "}";
    cout << endl;

    return 0;
}