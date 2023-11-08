#include <iostream>
// #include<chrono>
using namespace std;

typedef bool h;

class Test
{
public:
    int x;
    h f = false;

public:
    Test()
    {
        cout << "constructor" << endl;
    }
    void print();
    // {
    //     cout << "inside class" << endl;
    // }

    ~Test()
    {
        cout << "destructor" << endl;
        cout << "typedef:" << f << endl;
    }
} s;

class
{
public:
    int d;
    void print()
    {
        cout << "s" << endl;
    }
} s1;

void Test::print()
{
    cout << "outside class" << endl;
    // cout<<std::chrono::system_clock::now()<<endl;
}

int main()
{
    Test t;
    t.print();

    Test *t1 = &t;

    t1->print();
    (*t1).print();

    s.print();
    s1.print();

    return 0;
}