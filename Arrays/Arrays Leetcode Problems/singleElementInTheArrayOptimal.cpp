#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &nums, int size)
{
    int answer = 0;

    for (int i = 0; i < size; i++)
    {
        answer = answer ^ nums[i];
    }

    return answer;
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