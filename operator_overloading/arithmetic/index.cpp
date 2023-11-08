#include<iostream>

using namespace std;

class Plus{

    int weight;


public:

      Plus() = delete;

      Plus(int x){
        weight = x;
      }

      int getWeight(){
        return weight;
      }

    friend Plus operator+(Plus &obj1, Plus &obj2);
};

Plus operator+(Plus &obj1, Plus &obj2){
    obj2.weight = obj1.weight+obj2.weight;
    return obj2;
};

int main(){

    Plus p1(123);
    Plus p2(456);
    Plus res = p1+p2;
    cout<<res.getWeight()<<endl;

}