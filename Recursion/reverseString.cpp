#include <iostream>
using namespace std;

void reverseString(string &str, int i, int j)
{

    // Base Case
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverseString(str, i, j);
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

    int i = 0;
    int j = str.length() - 1;

    reverseString(str, i, j);

    cout << "The reverse of the string is : " << str << endl;

    return 0;
}