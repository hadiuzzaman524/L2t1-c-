#include <iostream>
using namespace std;

void swap (float *,float *);
void swap (float &,float &);
int main()
{
    float x=11.1F;
    float y=22.2F;
    cout<< "x and y before swapping:"<<x<< " "<<y<<endl;
    swap(&x,&y); //call pointer version
    cout<< "x and y after 1.swaping:"<<x<< " "<<y<<endl;
    swap(x,y);
    cout<< "x and y after 2.swaping:"<<x<< " "<<y<<endl;
    return 0;
}
void swap(float *p,float *p1)
{
    float temp;
    temp=*p;
    *p=*p1;
    *p1=temp;
}

void swap(float &a,float &b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
}
