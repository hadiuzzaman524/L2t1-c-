#include <iostream>
using namespace std;
class base
{
protected:
    int b;
};
class derivate1:private base
{
public:
    int d1;
    void showderived1value()
    {
        b=10;
        d1=10;
        cout<< b+d1<<endl;
    }
};
class derivate2:private derivate1
{
public:
    void showderived2value()
    {
        d1=50;
        b=50;
        cout<< d1<<endl;
    }
};
int main()
{
    derivate1 d1;
    derivate2 d2;
    d1.showderived1value();
    d2.showderived2value();
}
