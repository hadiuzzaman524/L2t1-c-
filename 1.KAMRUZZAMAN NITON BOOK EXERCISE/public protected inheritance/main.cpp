#include <iostream>

using namespace std;
class base
{
    int b1;
protected:
    int b2;
public:
    int b3;
    base()
    {
        b1=10;
        b2=12;
        b3=13;
    }
    void showvalue()
    {
        cout<< b1<< " "<< b2<< " "<<b3<<endl;
    }
};
class derivate:public base
{
public:
    void changevasememvalue()
    {
        b2=20;
        b3=44;
    }
};

int main()
{
  base b1;
  derivate d1;
 b1.showvalue() ;
 d1.changevasememvalue();
 d1.showvalue();
}
