#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;
    int c;
public:
    A()
    {
        a=0;
        b=0;
    }
    void setvalue(int x,int y)
    {
        a=x;
        b=y;
        c=x+y;
    }
    friend void showvalue(A a);
};
void showvalue(A a)
{   cout<< "the first number is :"<<a.a<<endl;
    cout<< "the second number is: "<<a.b<<endl;
    cout<< "the sum is: "<< a.c<<endl;
}

int main()
{
   A a1;
   a1.setvalue(5,10);
   showvalue(a1);
    return 0;
}
