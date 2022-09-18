#include <iostream>
using namespace std;

class Base//Abstract (Can be said as Interface )now(becuz of Pure virtual function)
{
public:
    virtual void fun1()=0;
    virtual void fun2()=0;//Polymorphism
};
class Derived:public Base
{
public:
    void fun1()//Override
    {
        cout<<"fun1 from Derived"<<endl;
    }
    void fun2()//Override
    {
        cout<<"fun2 from Derived"<<endl;
    }
};
int main()
{
    Derived d;
    d.fun2();
}