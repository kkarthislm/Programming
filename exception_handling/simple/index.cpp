#include<iostream>
#include<string>

using namespace std;


int divide(int x, int y){
    if(y == 0) throw 0;
    return x/y;
}

float divide(float x, float y){
    if(y == 0.0f) throw 0.0f;
    return x/y;
}

int main(){
    int a = 19, b = 0;
    try{
        if(b == 0) {
            throw 0;
        }
        a /= b;
    }catch(int e){
        cout<<(e == 0 ? "cannot divide by zero" : "")<<endl;
    }

    try{
       int c = divide(10,0);
    }catch(int e){
        cout<<(e == 0 ? "cannot divide by zero int" : "")<<endl;
    }

    try{
       cout<<divide(10.0f, 0.0f);
    }catch(...){
        cout<<"cannot divide by zero decimal"<<endl;
    }
}