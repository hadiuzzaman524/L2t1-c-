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
    Rect operator+(int p);
    Rect operator-(int p);
    Rect operator-(Rect r);
    Rect operator++();
    Rect operator+=(Rect op);
    void show()
    {
        cout<< "length: "<<length<< "\t"<< "width: "<<width<<endl<<endl;
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
    virtual ~Rect()
    {

    }
};
Rect::Rect(int len,int w)
{
    length=len;
    width=w;
}
Rect Rect::operator+(int p)
{
    Rect temp;
    temp.setlen(p+length);
    temp.setwidth(p+width);
    return temp;
}
Rect Rect::operator-(int p)
{
    Rect temp;
    temp.setlen(p-length);
    temp.setwidth(p-width);
    return temp;
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
   return (*this);

}
Rect Rect::operator+=(Rect r)
{
   length+=r.getlen();
   width+=r.getwidth();
   return (*this);

}

int main()
{
    Rect a(20,10),b,c;
    cout<< "at the begining in object a"<<endl;
    a.show();
    b=a+25;
    cout<< "\nafter b=a+25,in object b"<<endl;
    b.show();
    b=b-a;
    cout<< "\nafter b=b-a,in object b"<<endl;
    b.show();
    c=b-5;
    cout<< "\nafter c=b-5,in object c"<<endl;
    c.show();
    a+=c;
    cout<< "\nafter a+=c object c"<<endl;
    a.show();
}
