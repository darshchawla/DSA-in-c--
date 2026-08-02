#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    cout << endl;

    int b;
    cout << "Enter the number of bits to right shift : ";
    cin >> b;

    cout << endl;

    int c = (a >> b);
    cout << "The result of right shifting " << a << " by " << b << " bits is : " << c << endl;

    return 0;
}