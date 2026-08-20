#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &s)
{
    int i = 0;
    int answerIndex = 0;

    while (i < s.size())
    {
        int j = i + 1;
        while (j < s.size() && s[i] == s[j])
        {
            j++;
        }

        s[answerIndex] = s[i];
        answerIndex++;

        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                s[answerIndex] = ch;
                answerIndex++;
            }
        }
        i = j;
    }

    return answerIndex;
}

int main()
{
    string input;

    cout << "Enter a string : ";

    cin >> input;

    vector<char> s(input.begin(), input.end());

    cout << endl;

    cout << "The string is : ";

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }

    cout << endl;
    cout << endl;

    int a = compress(s);

    cout << "The total character in compressed string is : " << a << endl;

    cout << endl;

    cout << "The string compression is : ";

    for (int i = 0; i < a; i++)
    {
        cout << s[i];
    }

    cout << endl;

    return 0;
}