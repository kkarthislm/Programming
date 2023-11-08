#include<iostream>
#include<string>

using namespace std;

class Base{

public:
    virtual void printName(){
        cout<<"Base class"<<endl;
    }

};

class Derived:public Base{

public:
    void printName(){
        cout<<"Dervied class"<<endl;
    }

};

int main(){

    Base *p1 = new Derived();
    p1->printName();

}