#include <iostream>
using namespace std;

//By functions
#define max(x,y) (x>y?x:y)
#define msg(x) #x

//Symbolic constant
#define PI 3.1425

#ifndef PI
    #define PI 3;
#endif
int main()
{
    cout<<PI<<endl;
    cout<<max(7,9)<<endl;
    cout<<msg(Hello)<<endl;
}