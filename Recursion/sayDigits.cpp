#include <iostream>
using namespace std;

void sayDigits(string str[], int n)
{

    // Base Case
    if (n == 0)
    {
        return;
    }

    // Processing
    int digit = n % 10;
    n = n / 10;

    // Recursive Call
    sayDigits(str, n);

    cout << str[digit] << " ";
}

int main()
{
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    cout << "The number is words is : ";

    sayDigits(str, n);

    cout << endl;

    return 0;
}