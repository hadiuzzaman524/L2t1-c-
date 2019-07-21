#include <iostream>
#include <string.h>
using namespace std;
class X
{
    char name[25];
    float height;
    float width;
public:
    X()
    {
        strcpy(name,"jaman");
        height=150;
        width=115;
    }
    X(char *n,float h,float w);
    friend void operator<<(ostream &os,X x);
};
X::X(char *n,float h,float w)
{
    strcpy(name,n);
    height=h;
    width=w;
}
void operator<< (ostream &os,X x)
{
    os<< "Name: "<<x.name<<endl;
    os<< "height: "<<x.height<<endl;
    os<< "width: "<<x.width<<endl;
}
int main()
{
  X x1,x2("hadiuzzaman",float(130),float(66));
  cout<< "contents of x1: "<<endl;
  cout<<x1;
  cout<< "contents of x2: "<<endl;
  cout<<x2;
}
