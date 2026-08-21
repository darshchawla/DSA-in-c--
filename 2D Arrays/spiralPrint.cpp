#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> arr)
{
    vector<int> answer;

    int row = arr.size();
    int column = arr[0].size();

    int count = 0;
    int total = row * column;

    // index initialization
    int startingRow = 0;
    int startingColumn = 0;
    int endingRow = row - 1;
    int endingColumn = column - 1;

    while (count < total)
    {

        // printing starting row
        for (int index = startingColumn; count < total && index <= endingColumn; index++)
        {
            answer.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // printing ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            answer.push_back(arr[index][endingColumn]);
            count++;
        }
        endingColumn--;

        // printing ending row
        for (int index = endingColumn; count < total && index >= startingColumn; index--)
        {
            answer.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        // printing starting column
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            answer.push_back(arr[index][startingColumn]);
            count++;
        }
        startingColumn++;
    }

    return answer;
}

int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;

    cout << endl;

    int c;
    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<int> answer = spiralPrint(arr);

    cout << "The spiral print is : " << endl;

    int k = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << answer[k] << " ";
            k++;
        }

        cout << endl;
    }

    return 0;
}