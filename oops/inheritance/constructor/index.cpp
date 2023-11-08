#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
    string name = "base class";

public:
    BaseClass(){
        cout<<"base constructor"<<endl;
    }

    BaseClass(string p1){
        cout<<p1<<endl;
    }

    void show()
    {
        cout << name << endl;
    }
};

class SubClass : public BaseClass
{
public:
    string name = "sub class";

    SubClass(){
        cout<<"sub constructor"<<endl;
    }

    SubClass(string p1):BaseClass("param base"){
        cout<<p1<<endl;
    }


    void show()
    {
        cout << name << endl;
    }
};

class UseClass{
    BaseClass b;
};

int main()
{
    SubClass sub("param sub");
    sub.show();
    return 0;
}