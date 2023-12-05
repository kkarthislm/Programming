// dynamic contiguous array

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<string> array_list{"kart", "thik"};
    vector<int> *v2 = new vector<int>(1, 2);

    array_list.push_back("idiot");
    cout << array_list.size() << endl;

    for (auto &str : array_list)
    {
        str[0] = toupper(str[0]);
        cout << str << endl;
    }

    vector<int> v{2, 4, 5};
    v.push_back(6);
    v.pop_back();
    v[1] = 3;
    cout << v[2] << endl;
    for (int x : v)
        cout << x << ' ';
    cout << '\n';
    v.reserve(8);
    cout << v.size() << '\n';
    v.resize(5, 0);
    cout << v.capacity() << '\n';
    cout << v.size() << '\n';
    for (int x : v)
        cout << x << ' ';
    cout << '\n';
}

/*
--Member functions
(constructor) - constructs the vector
(destructor) - destructs the vector
operator= -assigns values to the container
assign - assigns values to the container
assign_range  (C++23)- assigns a range of values to the container
get_allocator - returns the associated allocator

--Element access
at - access specified element with bounds checking
operator[]-access specified element
front-access the first element
back- access the last element
data- direct access to the underlying array

--Iterators
begin,
cbegin- returns an iterator to the beginning
end,
cend-returns an iterator to the end
rbegin,
crbegin-returns a reverse iterator to the beginning
rend,
crend-returns a reverse iterator to the end

--Capacity
empty
 
checks whether the container is empty
size
 
returns the number of elements
max_size
 
returns the maximum possible number of elements
reserve
 
reserves storage
capacity
 
returns the number of elements that can be held in currently allocated storage
shrink_to_fit
  
(DR*)
 
reduces memory usage by freeing unused memory
Modifiers
clear
 
clears the contents
insert
 
inserts elements
insert_range
  
(C++23)
 
inserts a range of elements
emplace
  
(C++11)
 
constructs element in-place
erase
 
erases elements
push_back
 
adds an element to the end
emplace_back
  
(C++11)
 
constructs an element in-place at the end
append_range
  
(C++23)
 
adds a range of elements to the end
pop_back
 
removes the last element
resize
 
changes the number of elements stored
swap
 
swaps the contents

*/

