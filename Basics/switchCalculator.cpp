#include <iostream>
using namespace std;

int main()
{
    float a;
    cin >> a;

    char op;
    cin >> op;

    float b;
    cin >> b;

    cout << endl;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    }
}