#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArrays(int nums[], int size, int k)
{
    reverse(nums, nums + k);        // Time Complexity -> O(k).
    reverse(nums + k, nums + size); // Time Complexity -> O(n - k).
    reverse(nums, nums + size);     // Time Complexity -> O(n).

    // Overall Time Complexity -> O(2n).
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int nums[size];

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

    rotateArrays(nums, size, k);

    cout << "The rotated array is : { ";

    for (int value : nums)
    {
        cout << value << ", ";
    }

    cout << "}";
    cout << endl;

    return 0;
}