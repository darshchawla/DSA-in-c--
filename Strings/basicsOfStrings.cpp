#include <iostream>
using namespace std;

int main()
{
    string str1;

    cout << "Enter first string : ";

    getline(cin, str1);

    cout << endl;

    cout << "The first string is : ";

    cout << str1 << endl;

    cout << endl;

    string str2;

    cout << "Enter second string is : ";

    getline(cin, str2);

    cout << endl;

    cout << "The second string is : ";

    cout << str2 << endl;

    cout << endl;

    string str3 = str1 + str2;

    cout << "The third (combination of first two string) string is : ";

    cout << str3 << endl;

    cout << endl;

    cout << "The length of the third string is : ";

    cout << str3.length() << endl;

    return 0;
}