// is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end

#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    deque<string> deq;
    deq.push_back("K");
    deq.push_front("K");
    deq.push_front("A");
    deq.push_back("R");
    for (auto it : deq)
    {
        cout << it << endl;
    }
    deq.resize(1);
    cout << "after resize:" << endl;
    for (auto it : deq)
    {
        cout << it << endl;
    }
}

/*
--Member functions
(constructor)
(destructor)
operator=
assign
assign_range
get_allocator
--Element access
at
operator[]
front
back
--Iterators
begin,cbegin
end,cend
rbegin,crbegin
rend,crend
--Capacity
empty
size
max_size
shrink_to_fit
--Modifiers
clear
insert
inserts elements
insert_range
emplace
erase
erases elements
push_back
emplace_back
append_range
pop_back
push_front
emplace_front
prepend_range
pop_front
resize
swap

*/