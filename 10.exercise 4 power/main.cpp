#include <iostream>
#include <cmath>
using namespace std;

double pow(double base,int exp);

int main()
{
    double base=0.0;
    int exponent=0;
    cout<< "***computing integer powers ***\n"<<endl;
    cout<< "enter test values:";
    cin>>base;
    cout<< "exponent integers:";
    cin>>exponent;
    cout<< "result of "<<base<<"to the power of"<<exponent<< "="<<pow(base,exponent)<<endl;
    cout<< "computing with the standard function:"<< pow(base,(double)exponent)<<endl;

    return 0;
}
double pow(double base,int exp)
{
    if(exp==0)
        return 1;
    if(base==0.0)
        return 0.0;
    if(exp>0)
        return HUGE_VAL;
    else
        if(exp<0)
    {
        base=1.0/base;
        exp=-exp;
    }
    double power=1.0;
    for(int n=1; n<=exp; n++)
        power *=base;
    return power;
}
