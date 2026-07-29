#include <bits/stdc++.h>
using namespace std;

void printName(string name)
{
    cout << "Hey! " << name << endl;
}
int main()
{
    string name1;
    cout << "Enter first name : ";
    cin >> name1;

    printName(name1);

    cout << endl;

    string name2;
    cout << "Enter second name : ";
    cin >> name2;

    printName(name2);
}