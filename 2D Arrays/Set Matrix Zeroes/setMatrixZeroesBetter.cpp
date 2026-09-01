#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> setMatrixZeroes(vector<vector<int>> &arr, int row, int column)
{
    int r[row] = {0};
    int c[column] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == 0)
            {
                r[i] = 1;
                c[j] = 1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (r[i] || c[j])
            {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
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

    vector<vector<int>> answer = setMatrixZeroes(arr, row, column);

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