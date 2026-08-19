#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : ";

    cout << str << endl;

    cout << endl;

    reverse(str.begin(), str.end());

    cout << "The reversed string is : ";

    cout << str << endl;

    return 0;
}