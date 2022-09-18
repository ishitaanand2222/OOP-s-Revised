//First example of inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout<<"Display of Base"<<a<<endl;
    }
};

class Derived:public Base // child class getting features of base class
{
public:
    void show()
    {
        cout<<"Show of Derived"<<endl;
    }
};


int main()
{
    // Base b;
    // b.display();
    Derived d;
    d.a=100;
    d.display();
    d.show();

    return 0;
}