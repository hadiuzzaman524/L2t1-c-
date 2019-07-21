#include <iostream>
using namespace std;
class A
{
public:
    void showmsgA()
    {
        cout<< "this is class A."<<endl;
    }
};
class B:public A
{
public:
    void showmsB()
    {
        cout<< "this is class B."<<endl;
    }
};
class C:public B
{
 public:
     void showmsC()
     {
         cout<< "this is class C."<<endl;
     }

};
int main()
{
   C c1;
   c1.showmsB();
   c1.showmsC();
   c1.showmsgA();
}
