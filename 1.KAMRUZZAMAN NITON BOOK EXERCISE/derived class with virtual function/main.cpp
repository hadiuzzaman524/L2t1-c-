#include <iostream>

using namespace std;
class base
{
public:
    virtual void v1()
    {
        cout<< "this is virtual void function from base class."<<endl;
    }
};
class derived: public base
{
public:
    void v1()
    {
        cout<< "this is normal function from derived class."<<endl;
    }
     void v2()
    {
        cout<< "this is virtual function from derived class."<<endl;
    }
};
int main()
{
  base *bas;
  derived d;
  bas=&d;
  bas->v1();
  //bas->v2();
}
