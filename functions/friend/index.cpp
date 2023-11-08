// ability to access class method
#include<iostream>

using namespace std;

class Base{

    static int data;
    
    friend void updateData();
public:

    int get(){
        return data;
    }
};

int Base::data = 0;

void updateData(){
    Base b;
    b.data = 100000;
}

int main(){
    Base b1;
    updateData();
    cout<<b1.get()<<endl;
}