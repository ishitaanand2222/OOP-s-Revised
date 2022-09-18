//Runtime Polymorphism
#include <iostream>
using namespace std;

class Car
{
public:
//Pure virtual functions are used achieve generalization and polymorphism
    virtual void start()=0;//pure virtual functions.Since Car has pure virtual function,it is called abstract class

};
class Innova:public Car//A class inheriting from abstract class is also abstract and if we do not override the functions
//then the object of that class cannot be created. And if you override then the object of that class can be created.
{
public:
    void start()//Here we are overriding hence the object of this class of this can be created in main
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
    //Car c; Object cannot be created of Abstract class
    Car *p=new Innova();//Only pointer can be created
    p->start();
    p=new Swift();
    p->start();
}