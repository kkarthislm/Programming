#include<iostream>

using namespace std;

int main(){
    enum sex {MALE, FEMALE, TRANS};
    sex yours = MALE;
    cout<<sizeof(sex)<<endl;
    cout<<yours<<endl;
}