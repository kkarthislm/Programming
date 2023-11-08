#include<iostream>
#include<string>

using namespace std;

union Contact{
    /* data */
    char name[20];
    long int contactNumber;
};

int main(){
    union Contact myContact = {"karthick"};
    cout<<myContact.name<<endl;
    myContact.contactNumber = 1234567890;
    cout<<myContact.contactNumber<<endl;

}