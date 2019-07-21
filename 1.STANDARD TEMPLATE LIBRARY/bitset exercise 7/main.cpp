#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   bitset<4> b(string("1101"));
   bitset<4> a(string("1101"));
   cout<< (a==b)<<endl;
   cout<< (a&b)<<endl;
   cout<< (a|b)<<endl;
   cout<< (a^b)<<endl;
    return 0;
}
