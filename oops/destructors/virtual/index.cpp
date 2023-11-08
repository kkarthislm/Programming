#include <iostream>
using namespace std;

class A{
    public:

    virtual ~ A(){
        cout << "End Of A" << endl;
    }
};

class B:public A{
    public:
    virtual ~ B(){
        cout << "End Of B" << endl;
    }
};

class VirtualA{
    public:
    virtual ~ VirtualA()
    {
        cout << "End Of VirtualA" << endl;
    }
};

class VirtualB : public VirtualA{
    public:
    virtual ~ VirtualB()
    {
        cout << "End Of VirtualB" << endl;
    }
};

int main()
{
    B b;
    VirtualB virtualb;

    A *a = new B();
    VirtualA *virtualA = new VirtualB();

    delete a;
    delete virtualA;
};