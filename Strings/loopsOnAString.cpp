#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";

    getline(cin, str);

    cout << endl;

    cout << "The string is : ";

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;

    return 0;
}