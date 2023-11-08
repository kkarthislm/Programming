#include<iostream>
#include<string>
#include<tuple>

using namespace std;

int main(){
    tuple<string, int, string> tup;
    tup = {"sdsdsd",34343,"sddfdf"};
    // for(auto it:tup){
        cout<< get<0>(tup) <<endl;
    // }



}