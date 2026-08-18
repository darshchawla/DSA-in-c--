#include <iostream>
#include <vector>
using namespace std;

void sort0s1sand2s(vector<int>& nums, int size)
{
    int mid = 0;
    int high = size - 1;
    int low = 0;

    // Time Complexity -> O(n)

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }

        else if (nums[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
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