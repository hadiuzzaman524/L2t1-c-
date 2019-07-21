#include <iostream>
using namespace std;
class base1
{
public:
    void showbase1msg()
    {
        cout<< "this is base1 class."<<endl;
    }
};
class base2
{
public:
    void showba2msg()
    {
        cout<< "this is base2 class."<<endl;
    }
};
class base3
{
public:
    void showbase3msg()
    {
        cout<< "this is base3 class."<<endl;
    }
};
class derived:public base1,private base2,public base3
{
public:
    void showderivedmsg()
    {
       cout<< "this is the derived class."<<endl;
    };
};
int main()
{
    derived d1;
    d1.showbase1msg();
    d1.showbase3msg();
    d1.showderivedmsg();
}
