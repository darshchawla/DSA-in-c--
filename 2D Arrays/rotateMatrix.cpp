#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<vector<int>> arr,int row, int column){

    // Transpose the matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = i; j < column; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse every row
    for(int i = 0; i < row; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main (){
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

    cout << "The rotated 2d array is : " << endl;

    rotateArray(arr,r,c);

    return 0;
}