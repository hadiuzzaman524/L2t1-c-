#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

long sum(long x,long y,long z=0,long m=0);
int main()
{
    srand((unsigned int)time(NULL));
   long a,b,c,d,ret;
    a=rand()/10,b=rand()/10,c=rand()/10,d=rand()/10;
    ret=sum(a,b);
    cout<< ret<<endl;
    ret=sum(a,b,c);
    cout<<ret<<endl;
    ret=sum(a,b,c,d);
    cout<<ret<<endl;
    return 0;
}
long sum(long x,long y,long z,long m)
{
    return (x+y+z+m);
}
