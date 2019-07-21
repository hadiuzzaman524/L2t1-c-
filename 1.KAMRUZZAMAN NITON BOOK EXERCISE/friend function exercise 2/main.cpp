#include <iostream>
using namespace std;
class B;
class A
{
private:
    int jaman;
public:
    A()
    {
        jaman=0;
    }
    void setvalue(int x)
    {
        jaman=x;
    }
    void showvalue(B b);
};
class B
{
private:
    int habib;
public:

    B()
    {
        habib=0;
    }
    void setvalueb(int y)
    {
        habib=y;
    }
    friend void A::showvalue(B b);
};
void A::showvalue(B b)
{
    cout<< "the value of the class A is :"<< jaman<<endl;
    cout<< "the value of the class B is :"<<b.habib<<endl;
}

int main()
{
    A a1;

    B b1;
    a1.setvalue(30);
    b1.setvalueb(20);
    a1.showvalue(b1);

    return 0;
}
