#include <iostream>
#include <vector>
using namespace std;

void solve(string str, vector<string> &answer, string output, int index)
{
    // Base Case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            answer.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, answer, output, index + 1);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, answer, output, index + 1);
}

vector<string> subsequences(string str)
{
    vector<string> answer;
    string output = "";
    int index = 0;
    solve(str, answer, output, index);
    return answer;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : ";

    cout << str << endl;

    vector<string> answer = subsequences(str);

    cout << "The subsequences of the string are : " << endl;

    for (string s : answer)
    {
        cout << s << " " << endl;
    }

    return 0;
}