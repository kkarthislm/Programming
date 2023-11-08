
// Learned join, detach, joinable and mutux
// double join/detach will result to termination

#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>

using namespace std;

long int evenSum = 0;

void funcEvenSum(int x){
    cout<<"t1()"<<endl;
    for(int i = 0; i < x; i++){
        if((i & 1) == 0) evenSum += i; 
    }
}

std::mutex m;
int bal = 0;
void updateBal(int x){
    // m.lock();
    bal = x;
    // m.unlock();
}


int main() {
//     cout<<"Main() start"<<endl;
//     int x = 190000;
//     std::thread t1(funcEvenSum, x);
//     // if(t1.joinable()) t1.join();
//     if(t1.joinable()) t1.detach();

//     std::this_thread::sleep_for(chrono::seconds(1));
//     cout<<evenSum<<endl;
//     cout<<"Main() end"<<endl;
    
    
    
//mutex
    std::thread t1(updateBal,500);
    std::thread t2(updateBal,1000);
    t1.join();
    t2.join();
    cout<<bal<<endl;
    return 0;
}