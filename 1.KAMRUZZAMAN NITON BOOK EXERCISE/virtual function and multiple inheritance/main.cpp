#include <iostream>
using namespace std;
class base
{
public:
    virtual void msg()
    {
        cout<< "message from base class."<<endl;
    }
};
class derived:public base
{
public:
    void msg()
    {
        cout<< "message from derived1 class."<<endl;
    }
};
class derived2:public derived
{
public:
    void msg()

    {
        cout<< "message from derived2 class."<<endl;
    }
};
class derived3:public derived2
{

};
int main()
{
   base *ptr;
   derived d;
   derived2 d2;
   derived3 d3;
   ptr=&d;
   ptr->msg();
   ptr=&d2;
   ptr->msg();
   ptr=&d3;
   ptr->msg();
}
