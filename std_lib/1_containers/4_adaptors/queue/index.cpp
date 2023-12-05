
// queue FIFO

#include<iostream>
#include<string>
#include<queue>
#include<vector>

using namespace std;

int main(){
    queue<string> q;
    queue<vector<int>*> *q2 = new queue<vector<int>*>();
    q2->push(new vector<int>(1,2));

    q.push("Kart");
    q.push("hik");
    while(!q.empty()){
        cout<<q.back()<<endl;
        cout<<q.front()<<endl;
        q.pop();
    }
}