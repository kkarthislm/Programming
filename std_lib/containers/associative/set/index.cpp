#include<iostream>
#include<string>
#include<set>

using namespace std;

void print(set<int> &s){
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    
    // constructors
    set<int> s1{}; // empty initialization
    set<int> s2{1,2,3,4,5,6,7,7}; // universal initialization 
    set<int> s3(next(begin(s2),3), end(s2)); // copy construtor with specified range
    set<int> s4(s2); // deep copy construtor
    set<int> s5 = {7,6,5,4,3,2}; // init
    
    // read
    // cout<<s2.contains(1)<<endl;
    cout<<"s2 contains 1 :"<<(s2.count(1) == 0?" No ": "Yes")<<endl;
    // cout<<s2.find(1)<<endl;
    
    // insert
    set<int> s6;
    s6.insert(1);
    s6.insert({2,3,4});
    s6.insert(begin(s5),end(s5));
    s6.emplace(8);
    
    
    // delete

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);

    // s6.

    
}