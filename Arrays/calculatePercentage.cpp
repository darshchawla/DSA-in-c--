#include <iostream>
using namespace std;

int main()
{
    float marks[5];
    cout << "Enter marks of 5 subjects out of 100 -> " << endl;

    cout << "Physics : ";
    cin >> marks[0];

    cout << endl;

    cout << "Chemistry : ";
    cin >> marks[1];

    cout << endl;

    cout << "Maths : ";
    cin >> marks[2];

    cout << endl;

    cout << "English : ";
    cin >> marks[3];

    cout << endl;

    cout << "Computer Science : ";
    cin >> marks[4];

    cout << endl;

    float percentage;

    float total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    cout << "The percentage is " << percentage << "%." << endl;

    return 0;
}