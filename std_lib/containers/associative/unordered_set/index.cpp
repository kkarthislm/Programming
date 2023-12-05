// unordered set is a hashset

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){

    unordered_set<string> names;
    names.emplace("9688898487");
    names.emplace("Karthik2");

    for(auto temp : names){
        cout<<temp<<endl;
    }
    
}