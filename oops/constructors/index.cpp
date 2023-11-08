#include<iostream>

using namespace std;

class Constructor{

    int a;

public:
    
    Constructor(){
        setA(-1);
    }

    Constructor(int param){
        setA(param);
    }

    Constructor(Constructor &obj){
        setA(obj.a);
    }

    void print(){
        cout<<a<<endl;
    }

    int getA(){
        return a;
    }

    void setA(int param1){
        a = param1;
    }
};

int main(){
    Constructor defaulConstr;
    Constructor paramConstr(5);
    Constructor copyConstr(paramConstr);
    
    defaulConstr.print();
    paramConstr.print();
    copyConstr.print();
};