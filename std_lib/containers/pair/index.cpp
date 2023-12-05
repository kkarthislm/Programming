#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, string> phoneBook;
    phoneBook.emplace("9688898487", "Karthik");

    for(pair<string, string> temp : phoneBook){
        cout<<temp.first<<","<<temp.second<<endl;
    }
    
}