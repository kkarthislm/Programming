#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    
    // constructors
    map<int, string> m1{{1,"K"},{2,"A"},{3,"R"}}; // universal initialization
    map<int, string> m2({{1,""},{2,"A"},{3,"R"}});
    map<int, string> m3 = {{1,""},{2,"A"},{3,"R"}};
    map<int, string> m4(begin(m2), end(m2));
    map<int, string> m5(m1);

    map<string, string> phoneBook {};

    // add/insert
    phoneBook.insert({"1","Karthi"});
    phoneBook.insert(phoneBook.begin()++, {"15","Karthi"});
    phoneBook.insert({{"14","Karthi"},{"13","Karthi"},{"12","Karthi"}});

    phoneBook.emplace("1", "Karthik1"); // duplicates will be skipped
    phoneBook.emplace_hint(phoneBook.begin()++, "2", "Karthik2");

    // delete/erase
    phoneBook.erase(phoneBook.begin());
    phoneBook.erase("12");

    // read
    cout<<phoneBook.count("1")<<endl;
    // auto it = phoneBook.find("1");
    // cout<<it<<endl;
    // cout<<phoneBook.lower_bound("1")<<endl;
    // cout<<phoneBook.upper_bound("1")<<endl;
    // cout<<phoneBook.equal_range("1")<<endl;
    cout<<phoneBook.empty()<<endl;
    cout<<phoneBook.size()<<endl;
    cout<<phoneBook.at("15")<<endl;

    // modify
    phoneBook["15"] = "dfghj";
    // phoneBook["17"]->"dfghj";

    //modify key
    // auto entryset = phoneBook.extract()

    // merge c++17
    // m1.merge(m2);



    for(auto temp : phoneBook){
        cout<<temp.first<<","<<temp.second<<endl;
    }

    //clear 
    phoneBook.clear();
}