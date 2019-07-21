#include <iostream>
using namespace std;
class X
{
    int x;
public:
    X()
    {
        cout<< "constructing................"<<endl;

    }
    void setx(int a)
    {
        x=a;
    }
    int getx(void)
    {
        return x;
    }
    ~X()
    {
        cout<< "destructing....................."<<endl;
    }
};

void func(X &x)
{
    cout<< "value of the x from main function() : "<< x.getx()<<endl;
    x.setx(15);
    cout<< "value of the x from the functon () : "<< x.getx()<< endl;
}
int main()
{
    X x1;
    x1.setx(10);
    func(x1);
    cout<< "after calling func() x is : "<< x1.getx()<< endl;
}
