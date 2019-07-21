#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<< "this is constructor for base class."<<endl;
    }
    ~base()
    {
        cout<< "this is destructor for base class."<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<< "this is constructor for derived class"<<endl;
    }
    ~derived()
    {
        cout<< "this is destructor for derived class."<<endl;
    }
};
int main()
{
   derived d1;

}
