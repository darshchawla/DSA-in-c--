#include <iostream>
#include <vector> // vector is a header file
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(7);
    vec.push_back(18);
    vec.push_back(45);
    vec.push_back(5);
    vec.push_back(17);
    vec.push_back(37);
    vec.push_back(21);

    cout << "The vector is : ";

    for (int value : vec) // for each loop
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the vector is : " << vec.size();

    cout << endl;
    cout << endl;

    vec.pop_back();
    vec.pop_back();

    cout << "The vector after popping back a value is : ";

    for (int value : vec)
    {
        cout << value << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The size of the vector after popping back a value is : " << vec.size();

    cout << endl;
    cout << endl;

    // front
    cout << "The front value of the vector is : " << vec.front();

    cout << endl;
    cout << endl;

    // back
    cout << "The last value of the vector is : " << vec.back();

    cout << endl;
    cout << endl;

    // at
    cout << "The value at index 4 is : " << vec.at(4) << endl;

    return 0;
}