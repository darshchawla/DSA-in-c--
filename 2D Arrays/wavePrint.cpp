#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mColumns)
{
    vector<int> answer;

    for (int column = 0; column < mColumns; column++)
    {
        if (column % 2 == 0) // even index -> Top to bottom
        {
            for (int row = 0; row <= nRows - 1; row++)
            {
                answer.push_back(arr[row][column]);
            }
        }
        else // odd index -> Bottom to top
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                answer.push_back(arr[row][column]);
            }
        }
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

    vector<int> answer = wavePrint(arr, r, c);

    cout << "The wave print is : " << endl;

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