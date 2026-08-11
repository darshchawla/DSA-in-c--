#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &numbers)
{
    int frequency = 0;
    int answer = 0;
    int size = numbers.size();

    for (int i = 0; i < size; i++)
    {
        if (frequency == 0)
            answer = numbers[i];
        if (answer == numbers[i])
            frequency++;
        else
            frequency--;
    }

    return answer;
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

    cout << "The majority element is : " << answer << endl;

    return 0;
}