#include <iostream>
using namespace std;
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
    friend class B;
};
class B
{
    int prvB1;
public:
    B()
    {
        prvB1=0;
    }
    void getprvB1( A &a)
    {
        prvB1=a.prvA1+25;
        a.prvA1=50;
    }
    void showprvB1(A &a)
    {
        cout<< "\nvalue of prvA1="<< a.prvA1<< "\n";
        cout<< "\nvalue of prvB1="<< prvB1<<endl;
    }
};

int main()
{
    A a1;
    B b1;
   a1.getprvA1(30);
   b1.getprvB1(a1);
   b1.showprvB1(a1);
    return 0;
}
