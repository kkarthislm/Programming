// a container that supports fast insertion and removal of elements from anywhere in the container. Fast random access is not supported

#include<forward_list>
#include<iostream>
#include<string>

using namespace std;

int main(){

    forward_list<int> l1 {1,2,3,4,5,6};
    forward_list<int> l2 = {1,2,3,4,5,6};
    forward_list<int> l3 (6,3);
    forward_list<int> l4 (l3);
    forward_list<int> l5 = l2; 
    forward_list<int> l6 (next(begin(l5),2), end(l5));

    forward_list<int> singly_list;
    singly_list.push_front(4);
    singly_list.push_front(5);
    singly_list.push_front(1);
    singly_list.insert_after(singly_list.end(),1000);
    singly_list.resize(6);
    singly_list.resize(10,10);

    singly_list.front();
    // singly_list.back();

    singly_list.front() = 5;
    // singly_list.back() = 6;

    singly_list.pop_front();
    // singly_list.pop_back();
    singly_list.erase_after(singly_list.begin());
    singly_list.remove(1);

    singly_list.empty();
    singly_list.max_size();

    singly_list.sort();
    singly_list.reverse();
    singly_list.splice_after(next(singly_list.begin()), l1);

    l1.merge(l2);

    for(auto temp:singly_list){
        cout<<temp<<endl;
    }

}

/*

Member functions
(constructor)
  
(C++11)
 
constructs the forward_list
(public member function)
(destructor)
  
(C++11)
 
destructs the forward_list
(public member function)
operator=
  
(C++11)
 
assigns values to the container
(public member function)
assign
  
(C++11)
 
assigns values to the container
(public member function)
assign_range
  
(C++23)
 
assigns a range of values to the container
(public member function)
get_allocator
  
(C++11)
 
returns the associated allocator
(public member function)
Element access
front
  
(C++11)
 
access the first element
(public member function)
Iterators
before_begin
cbefore_begin
  
(C++11)
 
returns an iterator to the element before beginning
(public member function)
begin
cbegin
  
(C++11)
 
returns an iterator to the beginning
(public member function)
end
cend
  
(C++11)
 
returns an iterator to the end
(public member function)
Capacity
empty
  
(C++11)
 
checks whether the container is empty
(public member function)
max_size
  
(C++11)
 
returns the maximum possible number of elements
(public member function)
Modifiers
clear
  
(C++11)
 
clears the contents
(public member function)
insert_after
  
(C++11)
 
inserts elements after an element
(public member function)
emplace_after
  
(C++11)
 
constructs elements in-place after an element
(public member function)
insert_range_after
  
(C++23)
 
inserts a range of elements after an element
(public member function)
erase_after
  
(C++11)
 
erases an element after an element
(public member function)
push_front
  
(C++11)
 
inserts an element to the beginning
(public member function)
emplace_front
  
(C++11)
 
constructs an element in-place at the beginning
(public member function)
prepend_range
  
(C++23)
 
adds a range of elements to the beginning
(public member function)
pop_front
  
(C++11)
 
removes the first element
(public member function)
resize
  
(C++11)
 
changes the number of elements stored
(public member function)
swap
  
(C++11)
 
swaps the contents
(public member function)
Operations
merge
  
(C++11)
 
merges two sorted lists
(public member function)
splice_after
  
(C++11)
 
moves elements from another forward_list
(public member function)
remove
remove_if
  
(C++11)
 
removes elements satisfying specific criteria
(public member function)
reverse
  
(C++11)
 
reverses the order of the elements
(public member function)
unique
  
(C++11)
 
removes consecutive duplicate elements
(public member function)
sort
  
(C++11)
 
sorts the elements
(public member function)
*/