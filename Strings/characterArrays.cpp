#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[13];

    cout << "Enter character array : ";

    cin.getline(str, 13);

    cout << endl;

    cout << "The string is : ";

    // cout << str << endl; // char str[100];

    for (char ch : str)
    {
        cout << ch << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The length of the string is : ";

    cout << strlen(str) << endl;

    return 0;
}