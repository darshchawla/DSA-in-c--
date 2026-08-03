#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> marks[i];
        cout << endl;
    }

    cout << "The array of size " << size << " is : ";

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    return 0;
}