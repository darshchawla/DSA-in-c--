#include <iostream>
using namespace std;

void printingNumbers(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printingNumbers(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    printingNumbers(1, n);

    cout << endl;

    return 0;
}