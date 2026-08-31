#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionOfArrays(vector<int> &arr1, int size1, vector<int> &arr2, int size2)
{
    set<int> st;

    for (int i = 0; i < size1; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        st.insert(arr2[i]);
    }

    vector<int> temp;

    for (auto it : st)
    {
        temp.push_back(it);
    }

    return temp;
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