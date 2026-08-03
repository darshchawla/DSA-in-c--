#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {97, 100, 91, 88, 85};

    marks[2] = 95;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}