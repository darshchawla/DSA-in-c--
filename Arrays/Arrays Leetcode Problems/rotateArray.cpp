#include <iostream>
#include <vector>
using namespace std;

void rotateArrays(vector<int>& nums, int size, int k)
{
    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = nums[i];
    }

    // copy temp into nums vector
    nums = temp;
}

int main()
{
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;

    vector<int> nums(size);

    cout << endl;

    cout << "Enter all the elements of the vector : ";

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << endl;

    cout << "The vector is : ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    cout << endl;

    int k;
    cout << "Enter number of positions to rotate the array : ";
    cin >> k;

    cout << endl;

    rotateArrays(nums, size, k);

    cout << "The rotated array is : ";

    for (int value : nums)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}