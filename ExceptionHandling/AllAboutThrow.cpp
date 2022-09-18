#include <iostream>
using namespace std;

class MyException: exception
{
};
int division(int x, int y)
{
    if(y==0)
    throw MyException();

    return x/y;
}
int main()
{
    int x=5,y=0,c;
    try
    {
        if(y==0)
          throw MyException();
          //throw string("Division by 0");
        
        c=division(x,y);
        cout<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by Zero "<<endl;
    }

    cout<<"Bye\n";
}