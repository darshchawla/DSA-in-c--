#include <iostream>
using namespace std;

char maxCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int number = 0;
        // lowercase
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }

        // uppercase
        else
        {
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maximum = -1;
    int answer = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maximum < arr[i])
        {
            answer = i;
            maximum = arr[i];
        }
    }

    char finalAnswer = 'a' + answer;
    return finalAnswer;
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

    s = maxCharacter(s);

    cout << "The maximum occurring character in the string is : " << s << endl;

    return 0;
}