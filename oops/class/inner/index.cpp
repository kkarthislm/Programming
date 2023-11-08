#include<iostream>

using namespace std;

class List{

    class Node{
        public:
            int data = -1;
            Node *next;
        public:
        int getData(){
            cout<<data<<endl;
            return data;
        }

        void setData(int x){
            data = x;
        }
    };


    Node *n1 = new Node();

    public:
    void printHead(){
        n1->setData(10);
        cout<<n1->data<<endl;
    }
};


int main(){
    List l1;
    l1.printHead();
}

