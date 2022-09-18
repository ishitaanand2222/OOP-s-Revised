//Second example of inheritance
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(); // constructors: Default, Non parameterised
    Rectangle(int l,int b);//parameterised
    Rectangle(Rectangle &r);//copy
    int getLength()//getters or accessors
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l);//setters or mutators
    void setBreadth(int b);

    int area();//facilitators
    int perimeter();

    bool isSquare();//inspectors

   // ~Rectangle();//Destructors

};
class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Voulme is "<<c.volume()<<endl;
}

Rectangle :: Rectangle() // using scope resolution
{
    length=1;
    breadth=1;
}

Rectangle :: Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle :: Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle :: setLength(int l)
{
    length=l;
}
void Rectangle :: setBreadth(int b)
{
    breadth=b;
}

int Rectangle::area()
{
    return length*breadth;
}
int Rectangle :: perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle :: isSquare()
{
    if(length == breadth)
    return true;
    else
    return false;
}