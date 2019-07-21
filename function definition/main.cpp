#include <iostream>
using namespace std;

void test(int,double);
int main()
{
    cout<< "\n Now function test() will be called.\n";
    test(10,-7.5);
    cout<< "\n And back again in main()"<<endl;


    return 0;
}
void test(int a ,double b)
{
    cout<< " \nin function test()";
    cout<< "\n 1.a: "<<a;
    cout<< "\n 2.b:"<<b<<endl;
}
