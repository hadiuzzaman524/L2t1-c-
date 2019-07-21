#include <iostream>
using namespace std;
class A;
class B
{
    int prvB1;
public:
     B()
     {
         prvB1=0;
     }
     void getprvB1(int x)
     {
        prvB1=x;
     }
     void showprvB1(A a);


};
class A
{
    int prvA1;
public:
    A()
    {
        prvA1=0;
    }
    void getprvA1(int x)
    {
        prvA1=x;
    }
    friend void B:: showprvB1(A a);
};
void B::showprvB1(A a)
{
    cout<< "value of prvA1="<<a.prvA1<<endl;
    cout<< "value of prvB1="<<prvB1<<endl;
}
int main()
{
   A a1;
   B b1;
   a1.getprvA1(30);
   b1.getprvB1(50);
   b1.showprvB1(a1);
    return 0;
}
