#include <iostream>

using namespace std;

int main()
{
   int i;
   int &b=i;
   b=10;
   cout<< i<<endl;
   i=15;
   cout<< b<<endl;
    return 0;
}
