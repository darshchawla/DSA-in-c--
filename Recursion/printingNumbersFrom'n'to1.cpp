#include <iostream>
using namespace std;

void printingNumbers(int i, int n)
{
    if (i < 1)
        return;
    cout << i << " ";
    printingNumbers(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    printingNumbers(n, n);

    cout << endl;

    return 0;
}