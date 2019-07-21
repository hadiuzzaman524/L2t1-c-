#include <iostream>
using namespace std;
class base
{
public:
    virtual void vf1(void)
    {
        cout<< "this is vf1 is base class."<<endl;
    }
    virtual void vf2(void)
    {
        cout<< "this is vf2 in base class."<<endl;
    }
    void nf(void)
    {
        cout<< "this is non virtual function in base class."<<endl;
    }
};
class derived1:public base
{
public:
    void vf1(void)
    {
        cout<< "this is vf1 in derived class."<<endl;
    }
    void vf2(void)
    {
        cout<< "this is vf2 in derived class."<<endl;
    }
    void nf(void)
    {
        cout<< "this is non virtual function in derived class."<<endl;
    }
};
class derived2:public base
{

};

int main()
{
  base *bptr;
  derived1 d1;
  derived2 d2;
  bptr=&d1;
  bptr->vf1();
  bptr->vf2();
  bptr->nf();
  bptr=&d2;
  bptr->vf1();
  bptr->vf2();
}
