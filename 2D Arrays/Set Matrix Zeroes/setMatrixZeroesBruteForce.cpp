#include <iostream>
#include <vector>
using namespace std;

void markRow(vector<vector<int>> &arr, int i, int column)
{
    for (int j = 0; j < column; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void markColumn(vector<vector<int>> &arr, int j, int row)
{
    for (int i = 0; i < row; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void setMatrixZeroes(vector<vector<int>> &arr, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(arr, i, column);
                markColumn(arr, j, row);
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int row;
    cout << "Enter number of rows : ";
    cin >> row;

    cout << endl;

    int column;
    cout << "Enter number of columns : ";
    cin >> column;

    cout << endl;

    vector<vector<int>> arr(row, vector<int>(column));

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "The array after setting zeroes is : " << endl;

    setMatrixZeroes(arr, row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}