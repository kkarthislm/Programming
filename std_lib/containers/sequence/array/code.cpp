// fixed-size contiguous array
// basic func -> size, front, back, at or [], begin.., end..

#include <iostream>
#include <array>
#define tabl '\t'

using namespace std;

int main()
{
    array<int,6> a{1,2,3,4,5,6}, *c, d;
    c = &a;
    d = a;

    (*c)[5] = 12;
    d[5] = 7;
    cout<<"size: "<<a.size()<<endl;
    cout<<"access: "<<c->at(0)<<tabl<<d[5]<<tabl<<a[5]<<endl;
    cout<<"memory: "<<a.data()<<tabl<<c->data()<<endl;
    cout<<"front/back access: "<<a.front()<<tabl<<a.back()<<tabl<<endl;

    return 0;
}