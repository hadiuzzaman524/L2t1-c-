#include <iostream>
using namespace std;
class base
{
protected:
private:
public:
    int b1;
public:
    int b2;
};
class derivate:protected base
{
public:
    void showsum()
    {
        b1=50;
        b2=50;
        cout<< "b1+b2="<<b1+b2<<endl;
    }
};
int main()
{
   derivate d1;
   //d1.b1=60;
   //d1.b2=55;
   d1.showsum();
}
