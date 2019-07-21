#include <iostream>
using namespace std;
class base
{
public:
    virtual void type()
    {
        cout<< "this is the base class."<<endl;
    }
};
class derived1:public base
{
public:
    void type()
    {
        cout<< "this is the derived1 class."<<endl;
    }
};
class derived2:public base
{
public:
    void type()
    {
        cout<< "this is the derived2 class."<<endl;
    }
};
int main()
{
  base *ptr;
  derived1 d1;
  derived2 d2;
  ptr=&d1;
  ptr->type();
  ptr=&d2;
  ptr->type();
  d1.type();
  d2.type();

}
