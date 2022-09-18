#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Constructor Base\n";
    }
    virtual ~Base()
    {
        cout<<"Destructor Base\n";
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Constructor Derived\n";
    }
    ~Derived()
    {
        cout<<"Destructor Derived\n";
    }
};
void fun()
{
    Base *p= new Derived;//Base class pointer and derived class object
    delete p;
}
int main()
{
    fun();
}