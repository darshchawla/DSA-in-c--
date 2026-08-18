#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy first array's remaining elements
    while (i < size1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy second array's remaining elements
    while (j < size2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size1;
    cout << "Enter the size of the first array : ";
    cin >> size1;

    int arr1[size1];

    cout << endl;

    cout << "Enter all the elements of the first array : ";

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << endl;

    cout << "The first array is : ";

    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << endl;

    int size2;
    cout << "Enter the size of the second array : ";
    cin >> size2;

    int arr2[size2];

    cout << endl;

    cout << "Enter all the elements of the second array : ";

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;

    cout << "The second array is : ";

    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    cout << endl;

    int arr3[size1 + size2];

    merge(arr1, size1, arr2, size2, arr3);

    cout << "The merged array is : ";

    printArray(arr3, size1 + size2);

    return 0;
}