#include <iostream>
using namespace std;
class classA
{
    int a;
public:
    classA(int x)
    {
        a=x;
        cout<< "constructing....."<<endl;
    }
    void print(void)
    {
       cout<< "value of A is: "<<a<<endl;

    }
    ~classA()
    {
        cout<< "destructing......"<<endl;
    }
};
void funcA(classA obj);

int main()
{
   classA obj(10) ;
   funcA(obj);

    return 0;
}
void funcA(classA obj)
{
    obj.print();
}
