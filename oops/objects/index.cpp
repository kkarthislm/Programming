#include<iostream>

using namespace std;

class Data{

    int a;

public:
    
    int getA(){
        return a;
    }

    void setA(int param1){
        a = param1;
    }
};

int main(){
   Data d1;
   d1.setA(16);

   Data *d2 = new Data();
   d2->setA(19);

    cout<<d1.getA()<<endl;
    cout<<d2->getA()<<endl;
};