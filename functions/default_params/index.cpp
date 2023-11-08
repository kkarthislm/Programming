#include<iostream>

using namespace std;

int add_two_numbers(int a = 0, int b = 0){
    return a+b;
}

int add_array(int a[] = {0}, int size = 0){
    int result = 0;
    for(int i = 0; i < size; i++){
        result += a[i];
    }
    return result;
}

int main(){

    cout<< add_two_numbers() << endl;
    
    int a = 10, b = 15;
    cout<< add_two_numbers(a,b) << endl;
    
     cout<<add_array()<<endl;

    int array[] = {1,2,3,4};
    cout<<add_array(array, 4)<<endl;

    return 0;
}