#include <iostream>
using namespace std;

class Outer
{
public:
    void fun()
    {
        i.display();
    }

    class Inner
    {
    public:
        void display()
        {
            cout<<"Show Inner\n";
        }
    };
    Inner i; //Object can be created after declaration only
};

int main()
{
    Outer::Inner i;
}