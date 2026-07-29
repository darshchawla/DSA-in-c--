#include <bits/stdc++.h>
using namespace std;

// pass by reference
void printArray(int arr[], int a) // Array always Pass By Reference
{
    cout << "The array is : ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a = 5;
    int arr[a];

    cout << "Enter elements of the array : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    printArray(arr, a);

    cout << endl;
}