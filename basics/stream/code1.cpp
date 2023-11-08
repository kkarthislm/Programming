#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream of("output.txt");

    ifstream re("input.txt");
    if(re.is_open()){
        int left = 0, right = 0;
        while(!re.eof()){
            string s;
            // getline(re, s);
            re >> s;

            if(s.find("x-forwarded-for") > 0 || s.find("x-real-ip") > 0 || s.find("phoneNumber")> 0 || s.find("x-forwarded-for") > 0  ){
            // cout<<s;
            of << s;
            }
        }
    }
    of.close();
    re.close();
    return 0;
}