// Five categories
#include<iostream>

using namespace std;


class Test{

    int a;

    void add() const{
        // a += 10;   ------> 6
        cout<<a<<endl;
    }
};

void func(const int &x){
    // x++;   ------> 5
    cout<<x<<endl;
}

int main(){

    const int x = 10000;
    // x++;  ------> 1
    int y = 10000;
    const int *ptr = &y;
    // ++*ptr;  ------> 2
    ptr = &x;

    int * const ptr2 = &y;
    // ptr2 = &x;  ------> 3
    ++*ptr2;

    const int * const ptr3 = &y;
    // ptr3 = &x;   ------> 4
    // ++*ptr3;

    func(y);

};