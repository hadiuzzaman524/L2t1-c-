#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout<< "this is base1 class constructor."<<endl;
    }
    ~base1()
    {
        cout<< "this is base1 class destructor."<<endl;
    }
};
class base2
{
public:
    base2()
    {
        cout<< "this is base2 class constructor."<<endl;
    }
    ~base2()
    {
        cout<< "this is base2 class destructor."<<endl;
    }
};
class base3
{
public:
    base3()
    {
        cout<< "this is base3 class constructor."<<endl;
    }
    ~base3()
    {
        cout<< "this is base3 class destructor."<<endl;
    }
};
class derived:public base2,private base1,public base3
{
public:
    derived()
    {
        cout<< "class derived constructor."<<endl;
    }
    ~derived()
    {
        cout<< "class derived destructor."<<endl;
    }
};
int main()
{
   derived d1;
}
