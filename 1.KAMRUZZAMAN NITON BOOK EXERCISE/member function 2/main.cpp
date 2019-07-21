#include <iostream>
using namespace std;
class A
{ public:

    void funa()
    {
        cout<< "this is the function funa()"<<endl;
    }
    void funb()
    {
        cout<< "this is the function funb()"<<endl;
    }
};
class B
{
    A a1;
public:

    void funcb1()
    {
        cout<< "this is the function funcb1() in class b calling funca1() from class a"<<endl;
        a1.funa();
        a1.funb();
    }
    void funcb2()
    {
        cout<< "this is the function funcb2()"<<endl;
    }
};

int main()
{
    B b1;
    b1.funcb1();
    return 0;
}
