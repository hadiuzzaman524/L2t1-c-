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
    X operator+(int x);
    void show()
    {
        cout<< "height: "<<height<< "\t"<< "width: "<<width<<endl<<endl;
    }
};
X X::operator+(int x)
{
   X temp;
    temp.height=height+x;
    temp.width=width+x;
    return temp;
}
int main()
{
    X x1(50,75),x2;
    x2=x1+25;
    x1.show();
    x2.show();
}
