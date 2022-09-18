#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout<<"Constructor Created\n";
    }
    ~Demo()
    {
        cout<<"Destructor here";
    }
};
void fun()
{
    Demo *p=new Demo();
    delete p;
}
int main()
{
    fun();
}