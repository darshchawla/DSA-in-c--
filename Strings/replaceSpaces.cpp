#include <iostream>
using namespace std;

string replaceSpaces(string s)
{
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

            // temp += "@40";
        }
        else
        {
            temp.push_back(s[i]);
            // temp += s[i];
        }
    }

    return temp;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    cout << endl;

    cout << "The string is : ";

    cout << s << endl;

    cout << endl;

    s = replaceSpaces(s);

    cout << "The string after replacing spaces to @40 is : " << s << endl;

    return 0;
}