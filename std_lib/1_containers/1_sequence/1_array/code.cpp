// fixed-size (static) contiguous array
// basic func -> size, front, back, at or [], begin.., end..

#include <iostream>
#include <array>
#define tabl '\t'

using namespace std;

int main()
{
    array<int, 6> a{1, 2, 3, 4, 5, 6}, *c, d;
    c = &a;
    d = a;

    (*c)[5] = 12;
    d[5] = 7;
    cout << "size: " << a.size() << endl;
    cout << "access: " << c->at(0) << tabl << d[5] << tabl << a[5] << endl;
    cout << "memory: " << a.data() << tabl << c->data() << endl;
    cout << "front/back access: " << a.front() << tabl << a.back() << tabl << endl;
    return 0;
}

/*

--Element access
at
access specified element with bounds checking

operator[]  
access specified element

front  
access the first element

back
access the last element

data  
direct access to the underlying array

--Iterators
begin
cbegin  
returns an iterator to the beginning

end
cend
returns an iterator to the end

rbegin
crbegin
returns a reverse iterator to the beginning

rend
crend
returns a reverse iterator to the end

--Capacity
empty
checks whether the container is empty

size
returns the number of elements

max_size
returns the maximum possible number of elements

--Operations
fill
fill the container with specified value

swap
swaps the contents

*/