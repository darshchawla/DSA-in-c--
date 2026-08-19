#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    string answer = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            answer += " " + word;
        }
    }

    return answer.substr(1);
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

    s = reverseWords(s);

    cout << "The string after reversing its words is : " << s << endl;

    return 0;
}