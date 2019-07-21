#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  bitset<8> b(string("10111"));
  cout<< b.size()<<endl;
  cout<<b.count()<<endl;
  cout<<b.size()-b.count()<<endl;
  cout<< b[3]<<endl;
    return 0;
}
