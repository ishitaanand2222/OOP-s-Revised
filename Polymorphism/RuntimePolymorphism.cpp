//Runtime Polymorphism
#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start()//in order to call derived class function from Base class pointer & derived class object
    {
        cout<<"car started"<<endl;
    }
};
class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova started"<<endl;
    }
};
class Swift:public Car
{
public:
    void start()//override
    {
        cout<<"Swift started"<<endl;
    }
};
int main()
{
    Car *p=new Innova();
    // p->start(); Base class function will be called if no virtual
    p->start();//Polymorphism achived 
    p=new Swift();
    p->start();//same function by using different functions
}