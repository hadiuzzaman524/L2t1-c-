#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout<< "creating object of type A......."<<endl;
    }
    virtual void msg()
    {
        cout<< "msg() from class A."<<endl;
    }
   virtual ~A()
    {
        cout<< "destructor of object A..........."<<endl;
    }
};
class B: public A
{
      int *p;
  public:
       B()
       {
           p=new int[10];
           cout<< "creating object form type B...."<<endl;
       }
       virtual void msg()
       {
           cout<< "msg() from class B that inherit A."<<endl;
       }
       ~B()
       {
           delete[] p;
           cout<< "destroying object from B...."<<endl;
       }

};
int main()
{
  A *ptr=new B;
  ptr->msg();
  delete ptr;
}
