#include <iostream>
using namespace std;

void reachHome(int destination, int source)
{

    cout << "Source : " << source << "   " << "Destination : " << destination << endl;

    // Base Case
    if (destination == source)
    {
        cout << "The person reached home." << endl;
        return;
    }

    // Processing -> one step ahead
    source++;

    // Recursive Call
    reachHome(destination, source);
}

int main()
{
    int destination = 10; // 10km;

    int source = 1; // Source -> current position of the person -> 1km

    reachHome(destination, source);

    return 0;
}