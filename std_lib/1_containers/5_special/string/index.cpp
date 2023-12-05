#include<iostream>
#include<string>

using namespace std;

int main(){
    string whoami = "I am a problem solver !";

    whoami.append("My name is Karthick.");
    whoami += "That's it";
    cout<<whoami<<endl;
    cout<<"capacity:"<< whoami.capacity()<<endl;
    cout<<"size:"<< whoami.size()<<endl;
    cout<<whoami.find("Karthick")<<endl;
    cout<<whoami.find("K")<<endl;
    cout<<whoami.find('a',6)<<endl;
    cout<<whoami.rfind("k")<<endl;

    cout<<whoami.substr(4,6)<<endl;
    cout<<whoami.compare("")<<endl;
    cout<<whoami.insert(4,"?????")<<endl;
    whoami[10] = '?';
    cout<<whoami<<endl;
    whoami.resize(5);
    cout<<whoami<<endl;
    whoami.resize(30,'?');
    cout<<whoami<<endl;

    whoami.clear();
    cout<<whoami<<endl;

    whoami = (10,'k');
    cout<<whoami<<endl;

    whoami = to_string(1234);
    cout<<whoami<<endl;
    cout<<stoi(whoami)<<endl;

    string whoami1(4,'k');
    cout<<whoami1<<endl;

    string whoami2(whoami1.begin()+1,whoami1.end());
    cout<<whoami2<<endl;

    string whoami3(whoami2);
    cout<<whoami3<<endl;

}