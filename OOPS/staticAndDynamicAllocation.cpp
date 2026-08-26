#include <iostream>
using namespace std;

class Pokemon
{
public:
    // properties
    string name;
    int health;
    char level;
};

int main()
{

    // Static Allocation
    Pokemon a;

    a.name = "Pikachu.";
    a.health = 90;
    a.level = 'A';

    cout << "Name of the pokemon -> " << a.name << endl;
    cout << "Health -> " << a.health << endl;
    cout << "Level -> " << a.level << endl;

    cout << endl;

    // Dynamically
    Pokemon *b = new Pokemon;

    b->name = "Pikachu.";
    b->health = 100;
    b->level = 'B';

    cout << "Name of the pokemon -> " << (*b).name << endl; // (*b).name is also equal to b->name
    cout << "Health -> " << (*b).health << endl;
    cout << "Level -> " << (*b).level << endl;

    return 0;
}