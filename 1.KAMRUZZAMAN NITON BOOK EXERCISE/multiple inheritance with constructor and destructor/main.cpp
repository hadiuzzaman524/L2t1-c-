#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<< "class A constructor."<<endl;
    }
    ~A()
    {
        cout<< "class A destructor."<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<< "class B constructor."<<endl;

    }
    ~B()
    {
        cout<< "class B destructor."<<endl;
    }
};
class C:public B
{
public:
    C()
    {
        cout<< "class C constructor."<<endl;
    }
    ~C()
    {
        cout<< "class C destructor."<<endl;
    }
};
int main()
{
   //C c1;
   cout<< endl<<endl<<endl;
   B b1;
}
