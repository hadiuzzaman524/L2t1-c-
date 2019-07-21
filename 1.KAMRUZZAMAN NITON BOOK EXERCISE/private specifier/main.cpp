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
        return privateA;
    }
    void print(void)
    {
        cout<< "\nprivate number is : "<<privateA<<endl;
    }
};
class B:private A
{
private:
    int privateB;
public:
    void printB(void)
    {
        privateB=getvalue();
        cout<< "privateB is: "<<privateB<<endl;
    }
};

int main()
{
    A a1;
    B b1;
    a1.print();
    b1.printB();
}
