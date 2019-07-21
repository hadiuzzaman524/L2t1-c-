#include <iostream>
using namespace std;
void swap(float *,float *);
int main()
{
    float x=11.2F;
    float y=22.2F;
    swap(&x,&y);


    return 0;
}
void swap(float *p1,float *p2)
{

    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"x="<<*p1<<endl<< "y="<<*p2<<endl;
}
