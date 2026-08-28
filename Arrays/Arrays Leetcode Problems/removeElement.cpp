#include <iostream>
#include <vector>
using namespace std;

vector<int> removeElement(vector<int> &nums, int size, int target)
{
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] != target)
        {
            answer.push_back(nums[i]);
        }
    }

    return answer;
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

    int target;
    cout << "Enter an element to remove from the array : ";
    cin >> target;

    cout << endl;

    vector<int> answer = removeElement(nums, size, target);

    cout << "The array after removing element is : ";

    for (int value : answer)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}