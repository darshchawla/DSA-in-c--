#include <iostream>
#include <vector>
using namespace std;

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

    for (int value : number)
    {
        int count = 0;
        for (int element : number)
        {
            if (element == value)
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            cout << "The majority element is : " << value << endl;
            break;
        }
    }

    return 0;
}