#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows of both matrices : ";
    cin >> r;

    cout << endl;

    int c;
    cout << "Enter number of columns of both the matrices : ";
    cin >> c;

    cout << endl;

    int arr1[r][c];

    cout << "Enter all the elements of the first matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int arr2[r][c];

    cout << "Enter all the elements of the first matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << endl;

    cout << "The 2d array is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int arr3[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "The matrix with the sum of first two matrices is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}