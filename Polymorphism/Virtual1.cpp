#include<iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout<<"Function of Base"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun() // here function overriding takes place
    {
        cout<<"Function of Derived"<<endl;
    }
};

int main()
{
    Base *p = new Derived();// Base class pointer and derived class object
    // p->fun();//hence the function of Base class will be called
    p->fun(); //function of derived class will be called because base class object is now defined as virtual
}