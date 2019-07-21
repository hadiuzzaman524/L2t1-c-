#include <iostream>
using namespace std;
int factorial(int a)
{   if(a<1)
    return 1;
    else

    return factorial(a-1)*a;
}

int main()
{   int n;
    cout<< "using loop:"<<endl;
    cout<< "enter a number to find factorial:"<<endl;
    cin>>n;
    int i=1,fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<< "the factorial is :"<<fact<<endl;
    cout<<"\n\n\n";
    cout<< "using function."<<endl;

    cout<< "the factorial is:"<<factorial(n)<<endl;
    return 0;
}
