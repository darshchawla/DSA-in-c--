#include <iostream>
using namespace std;

int BinaryToDecimal(int n)
{
    int answer = 0;
    int power = 1;

    while (n > 0)
    {
        int remainder = n % 10;
        answer = answer + (remainder * power);
        n = n / 10;
        power = power * 2;
    }

    return answer;
}

int main()
{
    int n;
    cout << "Enter a binary number : ";
    cin >> n;

    cout << endl;

    int answer = BinaryToDecimal(n);

    cout << "The given binary number to decimal number is : " << answer << endl;

    return 0;
}