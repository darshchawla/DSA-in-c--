#include <iostream>
#include <climits>
using namespace std;

int largestRowSum(int arr[][3], int row, int column)
{
    int max = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            rowIndex = i;
        }
    }

    cout << "The maximum sum is : " << max << endl;
    cout << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int a = largestRowSum(arr, 3, 3);

    cout << "The row number with maximum sum is : " << a << endl;

    return 0;
}