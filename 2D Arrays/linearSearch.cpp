#include <iostream>
using namespace std;

bool linearSearch(int arr[][4], int target, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[3][4];

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int target;
    cout << "Enter a element to search in the 2d array : ";
    cin >> target;

    cout << endl;

    bool result = linearSearch(arr, target, 3, 4);

    if (result == 1)
    {
        cout << "Element found." << endl;
    }

    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}