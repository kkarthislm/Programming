
#include <iostream>
#include <thread>

void helloworld()
{
    int i = 0;
    while (i++ < 100)
    {
        std::cout << i << " : thread printing hello world" << std::endl;
    }
}

int main()
{
    std::thread::id test;
    std::cout<<"ID: "<<std::this_thread::get_id() << std::endl;

    std::thread t(helloworld);
    std::cout<<"ID: "<<t.get_id()<< std::endl;
    
    t.join();



    unsigned long const hardware_threads = std::thread::hardware_concurrency();

    std::cout << hardware_threads << " : max threads" << std::endl;

    return 0;
}