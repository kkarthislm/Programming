// multi set accepts duplicate entries

#include<iostream>
#include<string>
#include<set> //multiset included in set lib

using namespace std;

int main(){
    multiset<string> names;
    names.emplace("9688898487");
    names.emplace("9688898487");

    for(auto temp : names){
        cout<<temp<<endl;
    }
}