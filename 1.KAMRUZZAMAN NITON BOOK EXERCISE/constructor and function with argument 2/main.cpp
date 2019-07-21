#include <iostream>
using namespace std;
class base
{
    int x,y;
public:
    base(int i,int j)
    {
        x=i;
        y=j;
        cout<< "value of x and y is: "<< x<< "\t"<< y<<endl;
    }
};
class derived:public base
{
    int x,y;
public:
    derived(int i,int j):base(100,200)
    { x=i;
        y=j;
      cout<< "values of x and y in derived class: "<< x<< "\t"<<y<<endl;
    }
};
int main()
{
    derived d1(2,4);
}
