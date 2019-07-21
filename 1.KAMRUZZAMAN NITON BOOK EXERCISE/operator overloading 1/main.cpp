#include <iostream>
using namespace std;
class X
{
    int height,width;
public:
    X()
    {
        height=width=0;
    }
    X(int H,int W)
    {
        height=H;
        width=W;
    }
   friend X operator+(X x,int i);
   void show()
   {
       cout<< "height: "<<height<< "\t"<< "width: "<< width<<endl;
   }

};
X operator+(X x,int i)
{
    X temp;
    temp.height=x.height+i;
    temp.width=x.width+i;
    return temp;
}
int main()
{
  X x1(50,75),x2;
  x2=x1+25;
  x1.show();
  x2.show();
}
