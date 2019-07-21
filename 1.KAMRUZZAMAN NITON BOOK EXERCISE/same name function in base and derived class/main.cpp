#include <iostream>

using namespace std;
class base
{
public:
    void showmsg()
    {
        cout<< "Hello Jaman:this is function from base class."<<endl;
    }
};
class derived:public base
{
public:
    void showmsg()
    {
        cout<< "Hello jaman:this is function from derived class"<<endl;
    }
};
int main()
{
    derived d1;
    base b1;
    d1.base::showmsg();
}
