#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
    int answer = 0;
    int power = 1;

    while (n > 0)
    {
        int remainder = n % 2;
        n = n / 2;

        answer = answer + (remainder * power);
        power = power * 10;
    }

    return answer; // Binary form
}

int main()
{
    int n;
    cout << "Enter a decimal number : ";
    cin >> n;

    cout << endl;

    int answer = decimalToBinary(n);

    cout << "The given decimal number to binary number is : " << answer << endl;

    return 0;
}