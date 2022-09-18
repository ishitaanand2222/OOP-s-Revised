#include <iostream>
using namespace std;

namespace First 
{
    void fun()
    {
        cout<<"First\n";
    }
};
namespace Second
{
    void fun()
    {
        cout<<"Second\n";
    }
};

using namespace First;//This method of writing should be avoided
int main()
{
    fun();
    Second::fun();
}