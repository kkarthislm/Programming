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