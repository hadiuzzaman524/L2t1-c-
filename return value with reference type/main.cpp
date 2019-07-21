#include <iostream>
#include <string>
using namespace std;
double &refmin(double&,double&);

int main()
{
    double x1= 1.1;
    double x2=x1+0.5;
    double y;
    y=refmin(x1,x2);
    cout<< "x1="<<x1<< "x2="<<x2<<endl;
    cout<< "minimum:"<<y<<endl;
    ++refmin(x1,x2);
     cout<< "x1="<<x1<< "x2="<<x2<<endl;
    cout<< "minimum:"<<y<<endl;
     ++refmin(x1,x2);
     cout<< "x1="<<x1<< "x2="<<x2<<endl;
    cout<< "minimum:"<<y<<endl;
     refmin(x1,x2)=10.1;
     cout<< "x1="<<x1<< "x2="<<x2<<endl;
    cout<< "minimum:"<<y<<endl;
     refmin(x1,x2) +=5.0;
     cout<< "x1="<<x1<< "x2="<<x2<<endl;
    cout<< "minimum:"<<y<<endl;
    return 0;
}
double &refmin(double& a,double& b)
{
    return a<=b?a:b;
}
