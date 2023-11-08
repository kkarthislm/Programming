#include<iostream>

using namespace std;

class Yours;

class Mine{
    int x = 10;
    friend Yours;
};

class Yours{
    Mine m1;
public: 
    void printVal(){
        m1.x = 100;
        cout<<m1.x<<endl;
    }
};

int main(){
    Yours y1;
    y1.printVal();
}