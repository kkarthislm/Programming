#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main(){
    deque<string> deq;
    deq.push_back("K");
    deq.push_front("K");
    deq.push_front("A");
    deq.push_back("R");
    for(auto it: deq){
        cout<<it<<endl;
    }
    
}