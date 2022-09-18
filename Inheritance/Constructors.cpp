#include<iostream>
using namespace std;


class Base
{
public:
    Base()
    {
        cout<<"Non-param of Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base "<<x<<endl;
    }

};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Non-param of Derived"<<endl;
    }
    Derived(int a)
    {
        cout<<"Param of Derived "<<a<<endl;
    }
    Derived(int x,int a):Base(x)
    {
        cout<<"Param of Derived "<<a<<endl;
    }
};
int main()
{
    // Derived d; 
    //Ouput:
    // Non-param of Base
    // Non-param of Derived
    //Derived d(10);
    //OUTPUT:Non-param of Base
    // Param of Derived 10
    Derived d(10,20);
    //Ouput:
    // Param of Base 10
    // Param of Derived 20

   return 0;
}