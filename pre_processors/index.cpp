#include<iostream>

using namespace std;

#define PI 3.14 // constants
#define SQR(x) (x*x) // functions
#define c cout // keyword constants

// #ifndef
//   #define T 3.14
// #endif

#define MQS(x) #x // literal constants

int main(){
    c<<PI<<endl;
    c<<SQR(10)<<endl;
    c<<MQS(Hello World)<<endl;
}