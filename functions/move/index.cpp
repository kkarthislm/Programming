#include<iostream>
#include<vector>

using namespace std;

vector<int> print(vector<int> a){
    cout<<a.size()<<endl;
    return a;
}

void print(int a){
    cout<<a<<endl;
}

int main(){

    int a{2};
    print(a);

    vector<int> b(5000);
    auto b1 = print(b);
    cout<<b.size()<<endl;
    cout<<b1.size()<<endl;


    auto c = print(std::move(b));
    cout<<b.size()<<endl;
    cout<<c.size()<<endl;
}