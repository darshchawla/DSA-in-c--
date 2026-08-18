#include <iostream>
#include <vector>
using namespace std;

void sort0s1sand2s(vector<int> &nums, int size)
{
    int countOfZero = 0;
    int countOfOne = 0;
    int countOfTwo = 0;

    for (int i = 0; i < size; i++) // Time Complexity -> O(n)
    {
        if (nums[i] == 0)
        {
            countOfZero++;
        }

        else if (nums[i] == 1)
        {
            countOfOne++;
        }

        else
        {
            countOfTwo++;
        }
    }

    int index = 0;

    for (int i = 0; i < countOfZero; i++) // Time Complexity -> O(n)
    {
        nums[index] = 0;
        index++;
    }

    for (int i = 0; i < countOfOne; i++) // Time Complexity -> O(n)
    {
        nums[index] = 1;
        index++;
    }

    for (int i = 0; i < countOfTwo; i++) // Time Complexity -> O(n)
    {
        nums[index] = 2;
        index++;
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