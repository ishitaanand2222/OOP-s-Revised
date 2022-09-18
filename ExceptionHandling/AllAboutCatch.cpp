#include <iostream>
using namespace std;

class MyException1: exception
{
};
class MyException2:public MyException1
{
};
int main()
{
    try
    {
        throw MyException2();
        // throw 'a';//Since char type catch is not defined hence all catch will be executed
    }
    catch (MyException2 e)//if there are multiple class in hierarchy then child class exception should be written first followed by base class
    //because parent class can handle all exceptions of child class hence writting exception of child class will be useless
    {
        cout<<"Exception of class 2"<<endl;
    }
    catch (MyException1 e)//if there are multiple class in hierarchy then child class exception should be written first followed by base class
    {
        cout<<"Exception of class 2"<<endl;
    }
    catch(int e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Double catch"<<endl;
    }
    catch(...)
    {
        cout<<"All catch\n";
    }
}