#include <iostream>

using namespace std;
int x;
void change(void)
{
    x=20;
}
int main()
{
   int x;
   x=10;
   change();
   cout<< "value of x is :"<< ::x<<endl; //scope resulation operator.
    return 0;
}
