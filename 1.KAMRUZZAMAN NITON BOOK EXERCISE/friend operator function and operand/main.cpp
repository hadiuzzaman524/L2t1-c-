#include <iostream>
using namespace std;
class Rect
{
    int length,width;
public:
    Rect()
    {
        length=width=0;
    }
    Rect(int length,int width);
    Rect operator++();
    Rect operator-(Rect r);
    void show()
    {
        cout<< "length: "<<length<< "\twidth: "<<width<<endl;
    }
    void setlen(int i)
    {
        length=i;
    }
    void setwidth(int w)
    {
        width=w;
    }
    int getlen()
    {
        return length;
    }
    int getwidth()
    {
        return width;
    }
    friend Rect operator+(Rect ob1,int p);
    friend Rect operator+(int p,Rect ob1);
};
Rect::Rect(int len,int w)
{
    length=len;
    width=w;
}
Rect Rect::operator-(Rect r)
{
    length-=r.getlen();
    width-=r.getwidth();
    return (*this);
}
Rect Rect::operator++()
{
    length++;
    width++;
    return *this;
}
Rect operator+(Rect ob,int p)
{
    Rect temp;
    temp.setlen(ob.getlen()+p);
    temp.setwidth(ob.getwidth()+p);
    return temp;
}
Rect operator+(int p,Rect ob)
{
    Rect temp;
    temp.setlen(ob.getlen()+p);
    temp.setwidth(ob.getwidth()+p);
    return temp;
}
int main()
{
   Rect a(20,10),b,c;
   cout<< "at the begining ,in object a"<<endl;
   a.show();
   b=a+25;
   cout<< "after b=a+25,in object b"<<endl;
   b.show();
    b=b-a;
    cout<< "after b=b-a,in object b"<<endl;
    b.show();
    c=15+a;

    cout<< "after c=15+a ,in object c"<<endl;
    c.show();
}
