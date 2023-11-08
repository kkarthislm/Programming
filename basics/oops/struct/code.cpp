#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data;
    string name;
    Node *children[];

    void print()
    {
        cout << name << endl;
    }
}; // must end with ;

struct
{
    int da;
    void p()
    {
        cout << da << endl;
    }
} a, b, *c;

struct s
{
    int da;
    void p()
    {
        cout << da << endl;
    }
} d;

int main()
{
    Node tree1, *tree2;

    tree1.data = 0;
    tree1.name = "root1";
    tree1.print();

    tree2 = new Node();
    tree2->data = -1;
    (*tree2).name = "root2";
    tree2->print();

    a.da = 4;
    b.da = 5;
    // c->da = 6;

    a.p();
    b.p();
    // (*c).p();

    return 0;
}
