#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
    string name = "base class";
    
    public:
    BaseClass()
    {
        cout << name << endl;
    }

    virtual void Print(){
        cout << name << endl;
    }
};

class SubClass : public BaseClass
{
public:
    string name = "sub class";

    SubClass(){
        cout << name << endl;
    }

    void Print(){
        BaseClass::Print();
        cout << name << endl;
    }

};

int main()
{
    BaseClass *sub = new SubClass();
    sub->Print();

}