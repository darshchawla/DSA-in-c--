#include <iostream>
using namespace std;

int main()
{
    // Input number of rows
    int r;
    cout << "Enter number of rows for row wise printing : ";
    cin >> r;

    cout << endl;

    // Input number of columns
    int c;
    cout << "Enter number of columns for row wise printing : ";
    cin >> c;

    cout << endl;

    // Creating a 2D array
    int arr1[r][c];

    cout << "Enter all the elements of the 2d array for row wise : " << endl;

    // Taking input of all the elements of the 2D array
    for (int i = 0; i < r; i++)     //
    {                               //
        for (int j = 0; j < c; j++) //
        {                           //  Row wise input
            cin >> arr1[i][j];      //
        }                           //
    }                               //

    cout << endl;

    int arr2[r][c];

    cout << "Enter all the elements of the 2d array for column wise : " << endl;

    for (int i = 0; i < c; i++)     //
    {                               //
        for (int j = 0; j < r; j++) //
        {                           //  Column  wise input
            cin >> arr2[j][i];      //
        }                           //
    }                               //

    cout << endl;

    cout << "Row wise 2D array is : " << endl;

    // Printing output of 2D array
    for (int i = 0; i < r; i++)        //
    {                                  //
        for (int j = 0; j < c; j++)    //
        {                              //
            cout << arr1[i][j] << " "; //   Row wise output
        }                              //
        cout << endl;                  //
    }                                  //

    cout << endl;

    cout << "Column wise 2D array is : " << endl;

    for (int i = 0; i < r; i++)        //
    {                                  //
        for (int j = 0; j < c; j++)    //
        {                              //
            cout << arr2[i][j] << " "; //   Column wise output
        }                              //
        cout << endl;                  //
    }                                  //

    return 0;
}