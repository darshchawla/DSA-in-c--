#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age (in years) : ";
    cin >> age;

    cout << endl;

    if (age >= 18)
    {
        cout << "The person can get driving license." << endl;
    }
    else
    {
        cout << "The person cannot get driving license." << endl;
    }
}