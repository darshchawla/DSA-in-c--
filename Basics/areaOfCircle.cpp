#include <iostream>
using namespace std;

int main()
{
    float r;
    cout << "Enter the radius of the circle : ";
    cin >> r;

    cout << endl;

    float pi = 3.1415;

    float area = pi * r * r;

    cout << "The area of the circle with radius " << r << " is : " << area << endl;
}