
#include<iostream>
#include<exception>

using namespace std;


class MyException: public exception {
    public:
    const char * what () const throw () {
      return "C++ Exception";
    }
};

int main(){
    int a = 10, b= 0, c = 0;

    try{
        if(b == 0) throw new MyException();
    }catch(MyException *ex){
        cout<<"Child class exception"<<endl;
                cout<<ex->what()<<endl;

    }catch(exception *ex){
        cout<<"Base class exception"<<endl;
                cout<<ex->what()<<endl;

    }


    try{
        if(c == 0) throw new exception();
    }catch(MyException *ex){
        cout<<"Child class exception"<<endl;
                cout<<ex->what()<<endl;
    }catch(exception *ex){
        cout<<"Base class exception"<<endl;
        cout<<ex->what()<<endl;
    }


}