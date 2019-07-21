#include <iostream>

using namespace std;
class base
{
public:
    void showmsgbase()
    {
        cout<< "this is base"<<endl;
    }
};
class derived:public base
{
public:
    void showmsgderived()
    {
        cout<< "this is derived class"<<endl;
    }
};
int main()
{
   base b;
   derived d;
   base *ptr;
   ptr=&d;
   ptr->showmsgbase();
}
