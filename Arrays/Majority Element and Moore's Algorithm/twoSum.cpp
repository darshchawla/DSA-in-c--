#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "The array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    bool found = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                if (found == false)
                {
                    cout << "The pair with targeted sum " << target << " is : ";
                }
                cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;

                cout << endl;

                cout << "The indices of the pair is : " << "(" << i << ", " << j << ")" << endl;

                found = true;
            }
        }
    }

    if (found == false)
    {
        cout << "No pair found for the target " << target << "." << endl;
    }

    return 0;
}