#include <iostream>
using namespace std;

int main()
{
    int x=5,y=0,c;
    try
    {
        if(y==0)
          throw 1;
        
        c=x/y;
    }
    catch(int e)
    {
        cout<<"Division by Zero\n";
    }

    cout<<"Bye\n";
}