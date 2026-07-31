#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer : ";
    cin >> n;

    cout << endl;

    if (n > 0)
        cout << "Positive Number." << endl;
    else if (n < 0)
        cout << "Negative Number." << endl;
    else
        cout << "Neither Positive Nor Negative, Zero." << endl;
}