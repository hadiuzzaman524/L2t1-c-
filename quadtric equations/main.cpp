#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

string header= "*** solution of quadratic equation ***\n";
    string line(50,'*');
    bool quadequation(double a,double b,double c,double *x1ptr,double *x2ptr);
    void printquadequation(double a,double b,double c);

int main()
{
    cout<<header<<endl;
    printquadequation(2.0,-2.0,-1.5);
    printquadequation(1.0,-6.0,9.0);
    printquadequation(2.0,0.0,2.0);
    return 0;
}

void printquadequation(double a,double b,double c)
{
    double x1=0.0,x2=0.0;
    cout<<line<< '\n'<< "\nthe quadratic equation:\n\t"<<a<< "x*x+"<<b<< "*x +"<<c<< "=0"<<endl;
    if(quadequation(a,b,c,&x1,&x2))
    {
        cout<< "has real solutions:"<< "\n\tx1="<<x1<< "\n\tx2="<<x2<<endl;
    }
    else

        cout<< "has no real solutions!"<<endl;
        cout<< "\ngo on with return\n\n";
        cin.get();

}
bool quadequation(double a,double b,double c,double *x1ptr,double *x2ptr)
{
    bool return_flag=false;
    double help=b*b-4*a*c;
    if(help>=0)
    {
        help=sqrt(help);
        *x1ptr=(-b+help)/(2*a);
        *x2ptr=(-b-help)/(2*a);
        return_flag=true;
    }
    return return_flag;
}
