#include<iostream>
#include<string>

using namespace std;

struct Contact{
    string name;
    long int contactNumber;
};

struct {
    int a;
    void print(){
        cout<<a<<endl;
    }
}s1{123456};


int main(){
    Contact myContact;
    myContact.name = "karthik";
    myContact.contactNumber = 1234567890;
    cout<<myContact.name<<endl;
    cout<<myContact.contactNumber<<endl;

    s1.print();

}