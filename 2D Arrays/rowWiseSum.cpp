#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3], int row, int column)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum;
        cout << endl;
    }
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

    cout << "The row wise sum of the 2d array is : " << endl;

    rowWiseSum(arr, 3, 3);

    return 0;
}