#include <iostream>

using namespace std;

template <class T>

class Add
{
public:
    T a, b;

public:
    void setTemplates(T x, T y);
    T add();
};

template <class T>
void Add<T>::setTemplates(T x, T y)
{
    a = x;
    b = y;
}

template <class T>
T Add<T>::add()
{
    return a + b;
}

int main()
{

    Add<int> a;
    
    a.setTemplates(10,5);
    cout<<a.add()<<endl;
    
    Add<float> b;

    b.setTemplates(10.001f,5.009f);
    cout<<b.add()<<endl;
}
