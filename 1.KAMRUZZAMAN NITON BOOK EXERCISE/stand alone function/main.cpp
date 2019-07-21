#include <iostream>
using namespace std;
class B;
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
    friend void showprvvalue(A a,B b);
};
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
    friend void showprvvalue(A a,B b);
};
void showprvvalue(A a,B b)
{
    cout<< "value of prvA1="<<a.prvA1<<endl;
    cout<< "value of prvB1="<<b.prvB1<<endl;
    cout<< "the sum of the two object is: "<<a.prvA1+b.prvB1<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.getprvA1(50);
    b1.getprvB1(70);
    showprvvalue(a1,b1);
    return 0;
}
