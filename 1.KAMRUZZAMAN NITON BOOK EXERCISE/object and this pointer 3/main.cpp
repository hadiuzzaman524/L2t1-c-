#include <iostream>
using namespace std;
class X
{
public:
    int x;
    void showvalue();
};
void X::showvalue()
{
    cout<< "value of x by using     x: "<<x<<endl;
    cout<< "value of x by using this->x: "<<this->x<<endl;
}
int main()
{
  X x1,x2,x3;
  x1.x=10;
  x2.x=20;
  x3.x=30;
  x1.showvalue();
  x2.showvalue();
  x3.showvalue();
}
