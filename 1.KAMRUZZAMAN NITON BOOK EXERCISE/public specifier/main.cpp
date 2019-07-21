#include <iostream>
using namespace std;
class A
{
private:
    int privateA;
public:
    int getvalue(void)
    {
        cout<< "enter a number: ";
        cin>> privateA;
        return (privateA);
    }
    void print()
    {
        cout<< "privateA is: "<<getvalue()<<endl;
    }
};
class B:public A
{
    int privateB;
public:
    void printB(int x)
    {
        privateB=x;
        cout<< "privateB is: "<<privateB<<endl;
    }
};
int main()
{
    B b1;
    b1.print();
    b1.printB(b1.getvalue());
}
