#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOfArrays(vector<int> &arr1, int size1, vector<int> &arr2, int size2)
{
    int i = 0;
    int j = 0;

    vector<int> unionArray;

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < size1)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }

    while (j < size2)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    return unionArray;
}

int main()
{
    int size1;
    cout << "Enter the size of the first array : ";
    cin >> size1;

    cout << endl;

    vector<int> arr1(size1);

    cout << "Enter all the elements of the first array : ";

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << endl;

    int size2;
    cout << "Enter the size of the second array : ";
    cin >> size2;

    cout << endl;

    vector<int> arr2(size2);

    cout << "Enter all the elements of the second array : ";

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;

    cout << "The first array is : { ";

    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    cout << "The second array is : { ";

    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << ", ";
    }

    cout << "}";
    cout << endl;
    cout << endl;

    vector<int> answer = unionOfArrays(arr1, size1, arr2, size2);

    cout << "The union of two sorted arrays is : { ";

    for (int value : answer)
    {
        cout << value << ", ";
    }

    cout << "}";
    cout << endl;

    return 0;
}