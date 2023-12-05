// unordered map is a hashmap

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    
    unordered_map<string, string> phoneBook;
    phoneBook.emplace("9688898487", "Karthik1");
    // phoneBook.emplace("9688898487", "Karthik2");

    for(auto temp : phoneBook){
        cout<<temp.first<<","<<temp.second<<endl;
    }
}