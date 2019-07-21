#include <iostream>
using namespace std;
class A
{
    int x;
public:
    A(int i)
    {
        x=i;
        cout<< "value of x in constructor A."<<x<<endl;
    }
};
class B:public A
{
    int x,y;
public:
    B(int i,int j):A(444)
    {
       x=i;
       y=j;
       cout<< "value of x and y in constructor B."<<x<< '\t'<<y<<endl;
    }
};
class C:public B
{
    int x,y,z;
public:
    C(int i,int j,int k):B(3,4)
    {
        x=i;
        y=j;
        z=k;
        cout<< "value of x and y and z in constructor C."<< x<< "\t"<< y<< "\t"<<z<<endl;
    }
};
int main()
{
    C c1(2,4,5);
}
