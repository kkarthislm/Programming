// In cpp primitive/non-primitive (user defined / derived) datatypes are there

#include <iostream>
#include<cmath>

// import the namespace std
using namespace std;

void print_bits(char c)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << ((c >> i) & 1);
    }
    cout << endl;
}

void print_bits_int(int c)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((c >> i) & 1);
    }
    cout << endl;
}

int main()
{
    // primitive

    // void type
    bool a = true;
    char b = 'a';
    int c = 0;
    float d = 1.0;
    wchar_t e = 130;
    double f = 4.0000;

    if (a)
        cout << "here" << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;

    // can be used with modifiers signed/unsigned and short/long

    // capacity
    // char
    char g = 255, h = 127;

    print_bits(g);
    print_bits(h);
    unsigned char i = 255;
    signed char j = 128;
    print_bits(i);
    print_bits(j);

    // int
    int k = -2, l = (int)(exp2(32)-1);
    unsigned int m = 0;
    cout<<k<<endl<<l<<endl;
    print_bits_int(k);
    print_bits_int(l);

    return 0;
}

