#include <iostream>
#include <assert.h>

using namespace std;

int* test()
{
    int x = 0;
    int *y = &x;
    return y;
}

int testval()
{
    return 0;
}

int& testref()
{
    int x = 0;
    return x;
}

int main()
{
    // C++ references allow you to create a new name for an existing object.
    // All accesses and modifications done through the new reference affect the original
    int var = 42;
    int &ref = var;
    ref = 99;
    cout << "equal to 99 ? " << var << endl;

    // int& yref = 10;  // will it work?

    // test() = &var; // error
    // testref() = var; // ac

    std::string s1 = "Hello ";
    std::string s2 = "world";
    std::string &&s_rref = s1 + s2; // the result of s1 + s2 is an rvalue
    s_rref += ", my friend";        // I can change the temporary string!
    // cout<<&s_rref<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    std::cout << s_rref << '\n';    // prints "Hello world, my friend"

    // int a = testval(); lvalue
    // int& b = testval(); // error lvalue ref
    // const int& b = testval(); // const lvalue ref
    // int&& c = testval(); // rvalue ref

    return 0;
}