// headers -> fstream, ofstream - write, ifstream - read
// file write stream , default app mode
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream of("file.txt",ios::trunc);
    of << "Hello"<<endl;
    of << "World";
    of.close();

    ifstream ifs("file.txt");
    while(!ifs.eof()){
        char s[100];
        ifs >> s;
        cout<<s<<endl;
    }
    ifs.close();


    return 0;
}