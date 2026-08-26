#include <iostream>
#include <vector>
using namespace std;

void solve(string str, vector<string> &answer, int index)
{
    // Base Case
    if (index >= str.length())
    {
        answer.push_back(str);
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        solve(str, answer, index + 1);
        // Backtracking
        swap(str[index], str[j]);
    }
}

vector<string> permutations(string &str)
{
    vector<string> answer;
    int index = 0;
    solve(str, answer, index);
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

    vector<string> answer = permutations(str);

    cout << "The permutations of the array are : " << endl;

    for (string value : answer)
    {
        cout << value << endl;
    }

    return 0;
}