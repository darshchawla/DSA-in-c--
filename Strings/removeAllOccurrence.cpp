#include <iostream>
using namespace std;

string removeOccurrence(string str, string part)
{
    while (str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }

    return str;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : ";

    cout << str << endl;

    cout << endl;

    string part;
    cout << "Enter a part to remove in the string : ";
    getline(cin, part);

    cout << endl;

    str = removeOccurrence(str, part);

    cout << "The string after removing the part " << part << " is : " << str << endl;

    return 0;
}