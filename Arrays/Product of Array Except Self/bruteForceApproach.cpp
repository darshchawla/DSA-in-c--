#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &number, int size)
{
    vector<int> answer(size);

    for (int i = 0; i < size; i++)
    {
        int product = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                product = product * number[j];
            }
        }
        answer[i] = product;
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> number(size);

    for (int i = 0; i < size; i++)
    {
        int a = i + 1;
        cout << "Enter element number " << a << " : ";
        cin >> number[i];
        cout << endl;
    }

    cout << "The vector is : ";

    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }

    cout << endl;
    cout << endl;

    vector<int> answer = productExceptSelf(number, size);

    cout << "The product of the array except self is : ";

    for (int i = 0; i < size; i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl;

    return 0;
}