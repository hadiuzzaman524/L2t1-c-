#include <iostream>

using namespace std;
void swapvalue(int &x,int &y)
{
    int temp;
  temp=x;
  x=y;
  y=temp;
}

int main()
{
    int p=7,q=9;
    swapvalue(p,q);
    cout<< "the value of the p: and q: is :"<< p<< q<<endl;
    return 0;
}
