#include<forward_list>
#include<iostream>
#include<string>

using namespace std;

int main(){

    forward_list<int> l1 {1,2,3,4,5,6};
    forward_list<int> l2 = {1,2,3,4,5,6};
    forward_list<int> l3 (6,3);
    forward_list<int> l4 (l3);
    forward_list<int> l5 = l2; 
    forward_list<int> l6 (next(begin(l5),2), end(l5));

    forward_list<int> singly_list;
    // singly_list.push_back(1);
    // singly_list.push_back(2);
    // singly_list.push_back(3);
    singly_list.push_front(4);
    singly_list.push_front(5);
    singly_list.push_front(1);
    singly_list.insert_after(singly_list.end(),1000);
    singly_list.resize(6);
    singly_list.resize(10,10);

    singly_list.front();
    // singly_list.back();

    singly_list.front() = 5;
    // singly_list.back() = 6;

    singly_list.pop_front();
    // singly_list.pop_back();
    singly_list.erase_after(singly_list.begin());
    singly_list.remove(1);

    singly_list.empty();
    singly_list.max_size();

    singly_list.sort();
    singly_list.reverse();
    singly_list.splice_after(next(singly_list.begin()), l1);

    l1.merge(l2);

    for(auto temp:singly_list){
        cout<<temp<<endl;
    }

}