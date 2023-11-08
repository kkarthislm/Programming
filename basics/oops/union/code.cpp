#include <iostream>
using namespace std;
union u
{
    int x;
    double y;

    void print()
    {
        cout << x << "," << y << endl;
    }
};

union
{
    int x;
    double y;

    void print()
    {
        cout << x << "," << y << endl;
    }
} u2;

union u3
{
    int x;
    double y;

    void print()
    {
        cout << x << "," << y << endl;
    }
}*u4;

int main()
{
    u u1, *u11 = new u();

    u1.x = 10;
    u1.y = 1.000l;


    u11->x = 110;
    u11->y = 11.000l;

    u2.x = 10;
    u2.y = 1.000l;

    u4 = new u3();
    (*u4).x = 10;
    (*u4).y = 1.000l;
    u4->x = 101;

    u1.print();
    u11->print();
    u2.print();
    (*u4).print();

    cout<<sizeof(u4)<<endl;
    cout<<sizeof(u1)<<endl;



    return 0;
}