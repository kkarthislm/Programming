// multi map accepts duplicate keys

#include<iostream>
#include<string>
#include<map> // multimap included in the map lib

using namespace std;

int main(){
    multimap<string, string> phoneBook;
    phoneBook.emplace("1", "Karthik1");
    phoneBook.emplace("1", "Karthik2");

    for(auto temp : phoneBook){
        cout<<temp.first<<","<<temp.second<<endl;
    }
}