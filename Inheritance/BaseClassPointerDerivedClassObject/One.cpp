#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"Fun1 of Base"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun2()
    {
        cout<<"Fun2 of Base"<<endl;
    }
};

int main()
{
    Base *p;
    p=new Derived();
    p->fun1();
    // p->fun2(); we cannot use this because the base class pointer will look for functions of Base class \
    //it will not be having derived class functions
    return 0;
}