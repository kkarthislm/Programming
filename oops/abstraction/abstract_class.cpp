
#include<iostream>

using namespace std;

class Abs{
    public:
        void print(){
            cout<<"Main class"<<endl;
        }

        virtual void mustOverride() = 0;
};

class Abs1{
    public:
        void print(){
            cout<<"Main class"<<endl;
        }

        virtual void mustOverride() = 0;
};

class Sub: public Abs{
    public:
    
    void mustOverride(){
        cout<<"Overrided abstract method"<<endl;
    }

    void print(){
        cout<<"Sub class"<<endl;
    }
};

int main(){
    Sub s;
    s.mustOverride();
    s.print();

    return 0;
}