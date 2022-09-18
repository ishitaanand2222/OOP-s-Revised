//2nd example
#include<iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
};

class Cuboid:public Rectangle
{
    void volume()
    {
        cout<<"Volume of Cuboid"<<endl;
    }
};

int main()
{
    Rectangle *ptr;
    ptr = new Cuboid;
    ptr->area();
    // ptr->volume(); cannot be used
}