#include <iostream>
using namespace std;
class base
{
    int x,y;
public:
    base(int i,int j)
    {   x=i;
        y=j;
        cout<< "value of x,y is: "<<x<< ","<<y<<endl;
    }
};
class derived:public base
{
public:
    derived():base(10,100)
    {

    }
};
int main()
{
    derived d1;
}
