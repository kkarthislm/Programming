
// priority queue auto sort

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{

    // descending
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(6);
    pq.push(1);

    while (!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

     // ascending
    priority_queue<int> pq2;
    pq2.push(-4);
    pq2.push(-5);
    pq2.push(-3);
    pq2.push(-2);
    pq2.push(-6);
    pq2.push(-1);

    while (!pq2.empty()){
        cout <<-pq2.top() << endl;
        pq2.pop();
    }
}