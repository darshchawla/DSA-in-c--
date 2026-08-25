#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, vector<string> &answer, string output, int index, string mapping[])
{
    // Base Case
    if (index >= digits.length())
    {
        answer.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, answer, output, index + 1, mapping);
        output.pop_back();
    }
}

vector<string> letterCombination(string digits)
{
    vector<string> answer;
    if (digits.length() == 0)
    {
        return answer;
    }
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, answer, output, index, mapping);
    return answer;
}

int main()
{
    string digits;
    cout << "Enter a string : ";
    getline(cin, digits);

    cout << endl;

    cout << "The string is : " << digits << endl;

    vector<string> answer = letterCombination(digits);

    cout << "The letter combination of a phone number is : " << endl;

    for (string value : answer)
    {
        cout << value << endl;
    }

    return 0;
}