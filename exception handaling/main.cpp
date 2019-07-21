#include <iostream>
using namespace std;

int main()
{
    try
    {
           int a,b;
    cout << "enter first number:";
    cin>> a;
    cout << "enter second number:";
    cin>>b;
    if(b==0)
    {
        throw 1;
    }
    double result=(double)a/b;

    cout <<"the result is :"<<result<<endl;
    }
    catch(...)
    {
        cout <<"this number is not divide by zero";
    }


    return 0;
}
