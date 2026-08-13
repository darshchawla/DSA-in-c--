#include <iostream>
using namespace std;

void changeA1(int a) // Pass By Value
{
    a += 2;

    cout << "The value of a in changeA1 function is : " << a << endl;
}

void changeA2(int &a) // Pass By Reference using alias
{
    a *= 10;

    cout << "The value of a in changeA2 function is : " << a << endl;
}

void changeA3(int *ptr) // Pass By reference using pointers
{
    *ptr *= 7;

    cout << "The value of a in the changeA3 function is : " << *ptr << endl;
}

int main()
{
    int a = 5;

    changeA1(a);

    cout << endl;

    cout << "The value of a is main function is : " << a << endl;

    cout << endl;

    changeA2(a);

    cout << endl;

    cout << "The value of a in main function is : " << a << endl;

    cout << endl;

    changeA3(&a);

    cout << "The value of a in the main function is : " << a << endl;

    return 0;
}