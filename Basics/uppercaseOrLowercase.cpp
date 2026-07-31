#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet letter : ";
    cin >> ch;

    cout << endl;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The entered alphabet letter is uppercase." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The entered alphabet letter is lowercase." << endl;
    }
    else
    {
        cout << "The entered character is not alphabet letter." << endl;
    }

    // or
    //     if (ch >= 65 && ch <= 90)
    // {
    //     cout << "The entered alphabet letter is uppercase." << endl;
    // }
    // else if (ch >= 97 && ch <= 122)
    // {
    //     cout << "The entered alphabet letter is lowercase." << endl;
    // }
    // else
    // {
    //     cout << "The entered character is not alphabet letter." << endl;
    // }

    return 0;
}