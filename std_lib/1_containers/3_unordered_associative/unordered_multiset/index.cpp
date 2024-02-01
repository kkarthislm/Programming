// unordered multi set is a hashset which allows duplicate entries

#include<iostream>
#include<string>
#include<unordered_set> // unordered multi set included in the unordered_set lib

using namespace std;

int main(){

    unordered_multiset<string> names;
    names.emplace("9688898487");
    names.emplace("9688898488");
    names.emplace("9688898487");

    for(auto temp : names){
        cout<<temp<<endl;
    }
    
}