#include <iostream>
using namespace std;
class A
{
private:
    int x,y;
public:
    void add_xy(void);
};
void A::add_xy(void)
{
    x=y=5;
    cout<< "x+y: "<<x+y<<endl;
}

int main()
{
    A ob1;
    ob1.add_xy();

    return 0;
}
