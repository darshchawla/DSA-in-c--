#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter an age (in years) : ";
    cin >> age;

    cout << endl;

    if (age < 18)
    {
        cout << "Not eligible for job." << endl;
    }

    else if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon." << endl;
        }
    }

    else
    {
        cout << "Retirement time." << endl;
    }
}