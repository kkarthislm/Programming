#include<iostream>
#include<string>

using namespace std;

class Contact{
public:
    string name;
    long int number;
};

int main(){
    Contact c1;
    Contact *c2 = new Contact();
    c1.name = "Kart";
    c1.number = 903456;
    c2->name = "Thik";
    c2->number = 988987;
    cout<<c1.name<<endl<<c1.number<<endl;
    cout<<c2->name<<endl<<c2->number<<endl;

}