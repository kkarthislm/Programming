#include <iostream>

using namespace std;

namespace TESTCLASS
{
    class Test
    {
    public:
        void print()
        {
            cout << "Test class" << endl;
        }
    };
}

namespace TESTFUNC
{
    void Test()
    {
        cout << "Test func" << endl;
    };
}
