#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int row, int column, int target)
{
    int row = arr.size();
    int column = arr[0].size();

    int start = 0;
    int end = ((row * column) - 1);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int element = arr[mid / column][mid % column];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
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