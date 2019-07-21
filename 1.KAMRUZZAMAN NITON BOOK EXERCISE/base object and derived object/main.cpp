#include <iostream>

using namespace std;
class base
{
public:
    int b;
    base()
    {
        b=10;
    }
    void showmemvalueinbase()
    {
        cout<< b<<endl;
    }
};
class derivad:public base
{
    int d;
public:
    derivad()
    {
        b=50;
        d=100;
    }
    void showmemvaluederived()
    {
        cout<< b<< " "<<d<<endl;
    }
};
int main()
{
    base b1;
    derivad d1;
    d1.showmemvalueinbase();
    b1.showmemvalueinbase();
    d1.showmemvaluederived();
}
