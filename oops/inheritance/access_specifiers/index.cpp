#include <iostream>

using namespace std;

class A {
private:
    int a = 5;

protected:
    int a1 = 10;

public:
    int a2 = 15;

private:
    void show()
    {
        cout << a << endl;
    }

protected:
    void show1()
    {
        cout << a1 << endl;
    }

public:
    void show2()
    {
        cout << a2 << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        show1();
        show2();
        cout << a1 << endl << a2 << endl;
    }
};

class C
{
    A a;
public:
    void show()
    {
        cout << a.a2 << endl;
        a.show2();
    }
};

int main()
{
    C c;
    B b;
    c.show();
    b.show();
    return 0;
}