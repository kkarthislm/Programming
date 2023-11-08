// giving the base class specification to derived class
#include<iostream>

using namespace std;

class Base{

    int data;
public:
    void updateData(){
        data = 10;
    };

    int get(){
        return data;
    }
};

class Derived : public Base{
public:
    int getData(){
        Base::updateData();
        return Base::get();
    }
};

int main(){
    Derived d1;
    cout<<d1.getData()<<endl;
}