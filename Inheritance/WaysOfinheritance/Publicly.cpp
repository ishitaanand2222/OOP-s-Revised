#include <iostream>
using namespace std;

class Parent
{
private:int a;
protected:int b;
public:int c;
    void funParent()
    {
        a=10;
        b=5;
        c=20;
    }
};

class Child:public Parent //Publicly
{
public:
    void funChild()
    {
      //  a=10; a is private
        b=5;
        c=20;
    }
};

class GrandChild:public Child
{
public:
    void funGrandChild()
    {
       // a=10; //since a is private in Parent
        b=5;
        c=20;
    }
};

int main()
{
    Child c;
    // c.a=10; //because in object only public is accessible
    // c.b=5;
    c.c=15;
}