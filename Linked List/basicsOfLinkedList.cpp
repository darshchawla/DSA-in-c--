#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constuctor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{

    Node *node1 = new Node(7);

    cout << "Data of the node is : " << node1->data << endl;

    cout << "Address of next node is : " << node1->next << endl;

    return 0;
}