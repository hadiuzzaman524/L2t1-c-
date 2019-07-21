#include <iostream>

using namespace std;
class base
{
public:
    void msg()
    {
        cout<< "this is base clASS..."<<endl;
    }
};

class derived:public base
{
public:
    void msg()
    {
       cout<< "this is derived class...."<<endl;
    }

};
class derived2:public base
{   public:

    void msg()
    {
        cout<< "this is derived2 class............"<<endl;
    }
};

int main()
{
   base *ptr;
   derived d1;
   derived2 d2;
   ptr=&d1;
   ptr->msg();
   ptr=&d2;
   ptr->msg();
}
