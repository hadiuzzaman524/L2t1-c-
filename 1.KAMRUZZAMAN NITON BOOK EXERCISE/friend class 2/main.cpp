#include <iostream>
using namespace std;
class A
{
    int jaman;
public:

    A(int f)
    {   f=jaman;
    }
    void fun()
    {
        cout<< jaman<<endl;
    }
    friend class B;
};
class B
{
    int b;
    void se(A &d)
    {
        d=55;
    }
};

int main()
{
    A a2(30);
    B b2;
    b2.see(&a2);
    a2.fun();
    return 0;
}
