#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<< "base class constructor."<<endl;
    }
    ~base()
    {
        cout<< "base class destructor."<<endl;
    }
};
class derived1:public base
{
public:
    derived1()
    {
        cout<< "derived1 class constructor."<<endl;

    }
    ~derived1()
    {
        cout<< "derived calss destructor."<<endl;
    }
};
class derived2:public base
{
public:
    derived2()
    {
        cout<< "derived2 class constructor."<<endl;
    }
    ~derived2()
    {
        cout<< "derived2 class destructor."<<endl;
    }
};
class derived3:public base
{
public:
    derived3()
    {
        cout<< "derived3 class constructor."<<endl;
    }
    ~derived3()
    {
        cout<< "derived3 class destructor."<<endl;
    }
};
int main()
{
    derived3 d3;
    derived1 d1;
    derived2 d2;
}
