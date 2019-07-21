#include <iostream>
using namespace std;
class X
{
public:
    int x;
    void showaddress();
};
void X::showaddress()
{
    cout<< "address of this->x : "<< &(this->x)<<endl;
}
int main()
{
   X x1,x2,x3;
   x1.x=2;
   x2.x=3;
   x3.x=5;
   cout<< "address of x1 is: "<< &x1.x<<endl;
   x1.showaddress();
   cout<< "address of x2 is: "<<&x2.x<<endl;
   x2.showaddress();
   cout<< "address of x3 is: "<< &x3.x<< endl;
   x3.showaddress();
}
