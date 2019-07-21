#include <iostream>
using namespace std;
class classA
{
    int a;
public:
    classA(int x)
    {
        a=x;
        cout<< "\nconstructing....."<<endl;
    }
    void print(void)
{
    cout<< "value of a is:"<<a<<endl;
}
~classA()
{
    cout<< "destructing......"<<endl;
}
};
void func(classA *);
int main()
{
   classA ob1(10);
   func(&ob1);

}
void func(classA *s)
{
    s->print();
}
