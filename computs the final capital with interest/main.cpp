#include <iostream>
#include <cmath>
using namespace std;

double capital(double k0,double p,double n)
{
    return (k0*pow(1+p/100,n));
}
int main()
{
    double jaman=capital(100.1,3.4,2.5);
    cout<<showpoint;
    cout<<jaman<<endl;
    return 0;
}
