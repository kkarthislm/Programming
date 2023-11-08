#include<iostream>
using namespace std;

class Base{
    int x = 0;
    static int count;

    public:
    static void updateCount(){
        count++;
        cout<<count<<endl;
    }
};
int Base::count = 0;

int main(){

    Base::updateCount();
    Base::updateCount();
    Base::updateCount();
    Base::updateCount();

};