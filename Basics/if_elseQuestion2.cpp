#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    cout << endl;

    if (marks < 25)
    {
        cout << "Grade F." << endl;
    }

    else if (marks <= 44)
    {
        cout << "Grade E." << endl;
    }

    else if (marks <= 49)
    {
        cout << "Grade D." << endl;
    }

    else if (marks <= 59)
    {
        cout << "Grade C." << endl;
    }

    else if (marks <= 79)
    {
        cout << "Grade B." << endl;
    }

    else if (marks <= 100)
    {
        cout << "Grade A." << endl;
    }
}