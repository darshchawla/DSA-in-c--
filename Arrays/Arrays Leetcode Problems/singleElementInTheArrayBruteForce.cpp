#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        int number = nums[i];
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[j] == number)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return number;
        }
    }

    return -1;
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

    int answer = singleElement(nums, size);

    cout << "The single element in the array is : " << answer << endl;

    return 0;
}