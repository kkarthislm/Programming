// a container that supports constant time insertion and removal of elements from anywhere in the container. Fast random access is not supported.

#include<list>
#include<iostream>
#include<string>

using namespace std;

int main(){

    list<int> l1 {1,2,3,4,5,6};
    list<int> l2 = {1,2,3,4,5,6};
    list<int> l3 (6,3);
    list<int> l4 (l3);
    list<int> l5 = l2; 
    list<int> l6 (next(begin(l5),2), end(l5));

    list<int> doubly_list;
    doubly_list.push_back(1);
    doubly_list.push_back(2);
    doubly_list.push_back(3);
    doubly_list.push_front(4);
    doubly_list.push_front(5);
    doubly_list.push_front(1);
    doubly_list.insert(doubly_list.end(),1000);
    doubly_list.resize(6);
    doubly_list.resize(10,10);

    doubly_list.front();
    doubly_list.back();

    doubly_list.front() = 5;
    doubly_list.back() = 6;

    doubly_list.pop_front();
    doubly_list.pop_back();
    doubly_list.erase(doubly_list.begin());
    doubly_list.remove(1);

    doubly_list.empty();
    doubly_list.size();

    doubly_list.sort();
    doubly_list.reverse();
    doubly_list.splice(next(doubly_list.begin()), l1);

    l1.merge(l2);

    for(auto temp:doubly_list){
        cout<<temp<<endl;
    }

}

/*

Member functions
(constructor)
 
constructs the list
(public member function)
(destructor)
 
destructs the list
(public member function)
operator=
 
assigns values to the container
(public member function)
assign
 
assigns values to the container
(public member function)
assign_range
  
(C++23)
 
assigns a range of values to the container
(public member function)
get_allocator
 
returns the associated allocator
(public member function)
Element access
front
 
access the first element
(public member function)
back
 
access the last element
(public member function)
Iterators
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
rbegin
crbegin
  
(C++11)
 
returns a reverse iterator to the beginning
(public member function)
rend
crend
  
(C++11)
 
returns a reverse iterator to the end
(public member function)
Capacity
empty
 
checks whether the container is empty
(public member function)
size
 
returns the number of elements
(public member function)
max_size
 
returns the maximum possible number of elements
(public member function)
Modifiers
clear
 
clears the contents
(public member function)
insert
 
inserts elements
(public member function)
insert_range
  
(C++23)
 
inserts a range of elements
(public member function)
emplace
  
(C++11)
 
constructs element in-place
(public member function)
erase
 
erases elements
(public member function)
push_back
 
adds an element to the end
(public member function)
emplace_back
  
(C++11)
 
constructs an element in-place at the end
(public member function)
append_range
  
(C++23)
 
adds a range of elements to the end
(public member function)
pop_back
 
removes the last element
(public member function)
push_front
 
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
 
removes the first element
(public member function)
resize
 
changes the number of elements stored
(public member function)
swap
 
swaps the contents
(public member function)
Operations
merge
 
merges two sorted lists
(public member function)
splice
 
moves elements from another list
(public member function)
remove
remove_if
 
removes elements satisfying specific criteria
(public member function)
reverse
 
reverses the order of the elements
(public member function)
unique
 
removes consecutive duplicate elements
(public member function)
sort
 
sorts the elements
(public member function)

*/