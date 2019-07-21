#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    void add(void)
    {
        cout<< "A+B="<<a+b<<endl;
    }
};
class A a1;
void f1(void)
{   cout<< "f1(): {a=15,b=15}"<<endl;
    a1.a=15;
    a1.b=15;
    a1.add();
}

int main()
{
    cout<<  "in main():{a=5,b=5}"<<endl;
    a1.a=5;
    a1.b=5;
    a1.add();
    f1();
    return 0;
}
