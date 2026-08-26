#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int newx, int newy, int r, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((newx >= 0 && newx < r) && (newy >= 0 && newy < r) && visited[newx][newy] == 0 && m[newx][newy] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> m, int r, vector<string> &answer, int sourcex, int sourcey, vector<vector<int>> visited, string path)
{
    // Base Case
    if (sourcex == r - 1 && sourcey == r - 1)
    {
        answer.push_back(path);
        return;
    }

    visited[sourcex][sourcey] = 1;

    // 4 choices -> Down / Left / Right / Up
    // down
    int newx = sourcex + 1;
    int newy = sourcey;
    if (isSafe(newx, newy, r, visited, m))
    {
        path.push_back('D');
        solve(m, r, answer, newx, newy, visited, path);
        path.pop_back();
    }

    // left
    newx = sourcex;
    newy = sourcey - 1;
    if (isSafe(newx, newy, r, visited, m))
    {
        path.push_back('L');
        solve(m, r, answer, newx, newy, visited, path);
        path.pop_back();
    }

    // right
    newx = sourcex;
    newy = sourcey + 1;
    if (isSafe(newx, newy, r, visited, m))
    {
        path.push_back('R');
        solve(m, r, answer, newx, newy, visited, path);
        path.pop_back();
    }

    // up
    newx = sourcex - 1;
    newy = sourcey;
    if (isSafe(newx, newy, r, visited, m))
    {
        path.push_back('U');
        solve(m, r, answer, newx, newy, visited, path);
        path.pop_back();
    }

    visited[sourcex][sourcey] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int r)
{
    vector<string> answer;

    if (m[0][0] == 0)
    {
        return answer;
    }

    int sourcex = 0;
    int sourcey = 0;

    vector<vector<int>> visited = m;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(m, r, answer, sourcex, sourcey, visited, path);
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    int r;
    cout << "Enter number of rows/columns : ";
    cin >> r;

    cout << endl;

    vector<vector<int>> m(r, vector<int>(r));

    cout << "Enter all the elements of the maze : ";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "The maze is : ";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    vector<string> answer = findPath(m, r);

    cout << "The ways to cross the path are : " << endl;

    for (string value : answer)
    {
        cout << value << endl;
    }

    cout << endl;

    return 0;
}