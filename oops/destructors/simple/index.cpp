#include<iostream>

using namespace std;

class Destructor{

    int a;

    void print(){
        cout<<a<<endl;
    }
    
public: 
    int getA(){
        return a;
    }

    void setA(int param1){
        a = param1;
    }

    ~ Destructor(){
        print();
    }
};

int main(){
    Destructor des;
    des.setA(12345);
};