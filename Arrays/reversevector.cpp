#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseVector(vector<int> &vec)
{
    reverse(vec.begin(), vec.end());

    cout << "The reversed vector is : ";

    for (int value : vec)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;

    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(15);
    vec.push_back(17);

    cout << "The vector is : ";

    for (int value : vec)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    reverseVector(vec);

    return 0;
}