#include <iostream>
using namespace std;
class A
{
    int x;
public:
    A(int i)
    {
        x=i;
        cout<< "value of x is: "<< x<<endl;
    }
};
class B
{
    int x,y;
public:
    B(int i,int j)
    {
        x=i;
        y=j;
        cout<< "value of x is: "<<x<<endl<< "value of y is:"<<y<<endl;
    }
};
class C
{
public:
    C()
    {
        cout<< "this is the c class constructor."<<endl;
    }
};
class D:public A,public C,public B
{
    int x,y,z;
public:
    D(int i,int j,int k):A(10),B(5,6)
    {
        x=i;
        y=j;
        z=k;
        cout<< "value of x: "<<x<< '\t'<< "value of y: "<< y<< "\t"<< "value of z:"<<z<<endl;

    }
};
int main()
{
    D d1(2,3,4);
}
