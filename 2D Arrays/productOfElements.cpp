#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int product=1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product *= arr[i][j];
        }
    }

    cout << "The product of all the elements of the 2d array is : " << product << endl;

    return 0;
}