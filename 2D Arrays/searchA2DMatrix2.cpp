#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int row, int column, int target)
{
    int rowIndex = 0;
    int columnIndex = column - 1;

    while (rowIndex < row && columnIndex >= 0)
    {
        int element = arr[rowIndex][columnIndex];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            rowIndex++;
        }

        else
        {
            columnIndex--;
        }
    }

    return 0;
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

    int target;
    cout << "Enter a target to search in the matrix : ";
    cin >> target;

    cout << endl;

    bool a = binarySearch(arr, r, c, target);

    if (a == true)
    {
        cout << "Element found." << endl;
    }

    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}