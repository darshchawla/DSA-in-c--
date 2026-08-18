#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort0s1sand2s(vector<int> &nums, int size)
{
    sort(nums.begin(), nums.end());
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

    sort0s1sand2s(nums, size);

    cout << "The array after sorting 0s, 1s and 2s is : ";

    for (int value : nums)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}