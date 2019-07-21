#include <iostream>

using namespace std;
class base
{
public:
    virtual void msg()
    {
        cout<< "this is base class."<<endl;
    }
    void nonvirtual()
    {
        cout<< "this is nonvirtual function in base class."<<endl;
    }
};
class derived1:public base
{
public:
    void msg()
    {
        cout<< "this is derived1 class."<<endl;
    }
    void nonvirtual()
    {
        cout<< "this is nonvirtual function in derived class 1"<<endl;
    }
};
class derived2:public base
{
    public:
};
int main()
{
    base *ptr;
    derived1 d1;
    derived2 d2;
    ptr=&d1;
    ptr->msg();
    ptr->nonvirtual();
    ptr=&d2;
    ptr->msg();
    ptr->nonvirtual();

}
