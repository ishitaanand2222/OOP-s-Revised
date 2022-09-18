#include <iostream>
using namespace std;


// class Demo 
// {
// public:
//     int x=10;
//     int y=20;
//     void Display()const 
//     {
//        // x++;
//         cout<<x<<" "<<y<<endl;
//     }
// };
void fun(const int &a, int &b)
{
    cout<<a<<" "<<b<<endl;
    return;
}
int main()
{
    int x=10,y=18;
    fun(x,y);
    cout<<"MAIN :"<<x<<" "<<y<<endl;
//     const int x=10;
//     // const int *ptr=&x;//it cannot modify the value
//     // int const *ptr=&x;
//     // int *const ptr=&x;//pointer is cnst and hence ptr cannot be moved to anyother variable
//     // int y=20;
//     // ptr=&y;
//     //  ++*ptr;cannot modify because ptr is of type const

//    const int * const ptr=&x;
//     cout<<*ptr<<" "<<x<<endl;
}