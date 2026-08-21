#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> arr, int r)
{
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        sum += arr[i][i];
        if (i != r - i - 1)
        {
            sum += arr[i][r - i - 1];
        }
    }

    return sum;
}

int main()
{
    int r;
    cout << "Enter number of rows/columns : ";
    cin >> r;

    cout << endl;

    vector<vector<int>> arr(r, vector<int>(r));

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int a = diagonalSum(arr, r);

    cout << "The sum of both the diagonals is : " << a << endl;

    return 0;
}