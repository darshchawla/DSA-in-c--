#include <iostream>
using namespace std;

class Pokemon // Class of Pokemon Data type
{
public:
    // properties
    string name;
    int health;
    int attack;
    int defence;
    char level;
};

int main()
{

    // Creation of object
    Pokemon p1;

    p1.name = "Pikachu.";
    p1.health = 90;
    p1.attack = 100;
    p1.defence = 100;
    p1.level = 'A';

    cout << "Name of the pokemon -> " << p1.name << endl;
    cout << "Health -> " << p1.health << endl;
    cout << "Attack -> " << p1.attack << endl;
    cout << "Defence -> " << p1.defence << endl;
    cout << "Level -> " << p1.level << endl;

    return 0;
}