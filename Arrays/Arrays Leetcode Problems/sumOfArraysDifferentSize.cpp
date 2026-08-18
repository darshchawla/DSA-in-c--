#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& answer)
{
    int start = 0;
    int end = answer.size() - 1;

    while (start < end)
    {
        swap(answer[start], answer[end]);

        start++;
        end--;
    }

    return answer;
}

vector<int> arraySum(vector<int>& a, int size1, vector<int>& b, int size2)
{
    int i = size1 - 1;
    int j = size2 - 1;

    vector<int> answer;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int value1 = a[i];
        int value2 = b[j];

        int sum = value1 + value2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);

        i--;
        j--;
    }

    // First case
    while (i >= 0)
    {
        int sum = a[i] + carry;

        carry = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);

        i--;
    }

    // Second Case
    while (j >= 0)
    {
        int sum = b[j] + carry;

        carry = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);

        j--;
    }

    // Third Case
    while (carry != 0)
    {
        int sum = carry;

        carry = sum / 10;
        sum = sum % 10;
        answer.push_back(sum);
    }

    return reverse(answer);
}

int main()
{
    int size1;
    cout << "Enter the size of the first array : ";
    cin >> size1;

    vector<int> a(size1);

    cout << endl;

    cout << "Enter all the elements of the first array : ";

    for (int i = 0; i < size1; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    cout << "The first array is : ";

    for (int i = 0; i < size1; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << endl;

    int size2;
    cout << "Enter the size of the second array : ";
    cin >> size2;

    vector<int> b(size2);

    cout << endl;

    cout << "Enter all the elements of the second array : ";

    for (int i = 0; i < size2; i++)
    {
        cin >> b[i];
    }

    cout << endl;

    cout << "The second array is : ";

    for (int i = 0; i < size2; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;
    cout << endl;

    vector<int> answer = arraySum(a, size1, b, size2);

    cout << "The sum of both the arrays is : ";

    for (int value : answer)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}