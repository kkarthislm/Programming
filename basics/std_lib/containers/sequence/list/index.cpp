#include<list>
#include<iostream>
#include<string>

using namespace std;

int main(){

    list<int> l1 {1,2,3,4,5,6};
    list<int> l2 = {1,2,3,4,5,6};
    list<int> l3 (6,3);
    list<int> l4 (l3);
    list<int> l5 = l2; 
    list<int> l6 (next(begin(l5),2), end(l5));

    list<int> doubly_list;
    doubly_list.push_back(1);
    doubly_list.push_back(2);
    doubly_list.push_back(3);
    doubly_list.push_front(4);
    doubly_list.push_front(5);
    doubly_list.push_front(1);
    doubly_list.insert(doubly_list.end(),1000);
    doubly_list.resize(6);
    doubly_list.resize(10,10);

    doubly_list.front();
    doubly_list.back();

    doubly_list.front() = 5;
    doubly_list.back() = 6;

    doubly_list.pop_front();
    doubly_list.pop_back();
    doubly_list.erase(doubly_list.begin());
    doubly_list.remove(1);

    doubly_list.empty();
    doubly_list.size();

    doubly_list.sort();
    doubly_list.reverse();
    doubly_list.splice(next(doubly_list.begin()), l1);

    l1.merge(l2);

    for(auto temp:doubly_list){
        cout<<temp<<endl;
    }

}