#include <iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
      throw 1;
    return a/b;
}
int main()
{
    int x=5,y=0,c;
    try
    {
        c=division(x,y);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by Zero\n";
    }

    cout<<"Bye\n";
}