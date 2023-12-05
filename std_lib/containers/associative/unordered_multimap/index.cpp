// unordered multi map is a hashmap which allows duplicate keys

#include<iostream>
#include<string>
#include<unordered_map> // unordered multi map included in the unordered_map lib

using namespace std;

int main(){

    unordered_multimap<string, string> phoneBook;
    phoneBook.emplace("9688898487", "Karthik1");
    phoneBook.emplace("9688898488", "Karthik2");
    phoneBook.emplace("9688898487", "Karthik2");

    for(auto temp : phoneBook){
        cout<<temp.first<<","<<temp.second<<endl;
    }
    
}