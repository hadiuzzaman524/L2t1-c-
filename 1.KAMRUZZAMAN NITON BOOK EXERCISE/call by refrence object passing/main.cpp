#include <iostream>
using namespace std;
class X
{    int x;
public:
    X()
    {
        cout<< "constructing..............."<<endl;
    }
    void setX(int a)
    {
        x=a;
    }
    int getX(void)
    {
        return x;
    }
    ~X()
    {
        cout<< "destructing..................."<<endl;
    }
};
void func(X *x)
{
    cout<< "value of x from main() :"<<x->getX()<<endl;
    x->setX(14);
     cout<< "value of x in func() :"<< x->getX()<<endl;
}
int main()
{
    X x1;
    x1.setX(10);
    func(&x1);
    cout<< "after calling func() x is:"<<x1.getX()<<endl;
}
