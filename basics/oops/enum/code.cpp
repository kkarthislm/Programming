#include <iostream>

using namespace std;

enum a
{
    x,
    y
};

// enum
// {
//     MALE = 1,
//     FEMALE = 0,
//     OTHERS = 2
// }s2;

enum SEX
{
    MALE = 1,
    FEMALE = 0,
    OTHERS = 2
}s1;

int main()
{
    SEX s;
    s = MALE;
    s1 = FEMALE;
    // s2 = OTHERS;
    
    int s3 = MALE | FEMALE;

    cout<<s<<endl;
    cout<<s1<<endl;
    // cout<<s2<<endl;
    cout<<s3<<endl;

    return 0;
}
