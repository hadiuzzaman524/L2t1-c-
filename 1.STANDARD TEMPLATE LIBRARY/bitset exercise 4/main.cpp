#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   bitset<8> b(string("10101"));
   if(b.any()) //b.none() oposite function of b.any();
       cout<< "there has 1 "<<endl;

   else
   {
       cout<< "there are no 1 all of the element is zero"<<endl;
   }
}
