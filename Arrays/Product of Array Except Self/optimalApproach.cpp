#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &number, int size)
{
    vector<int> prefix(size);
    vector<int> suffix(size);
    vector<int> answer(size);

    prefix[0] = 1;
    suffix[size - 1] = 1;

    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] * number[i - 1];
    }

    for (int i = size - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * number[i + 1];
    }

    for (int i = 0; i < size; i++)
    {
        answer[i] = prefix[i] * suffix[i];
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