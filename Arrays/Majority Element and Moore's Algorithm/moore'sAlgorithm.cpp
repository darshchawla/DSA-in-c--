#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &numbers)
{
    int count = 0;
    int element = 0;
    int size = numbers.size();

    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = numbers[i];
        }
        else if (numbers[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == element)
        {
            count1++;
        }
    }

    if (count1 > (size / 2))
    {
        return element;
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;

    cout << endl;

    vector<int> number(size);

    cout << "Enter all the elements of the vector : ";

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    cout << endl;

    cout << "The vector is : ";

    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }

    cout << endl;
    cout << endl;

    int answer = majorityElement(number);

    cout << "The majority element in the array is : " << answer << endl;

    return 0;
}