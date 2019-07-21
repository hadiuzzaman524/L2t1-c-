#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> b(string("10101"));
    b.set(1);
    b.reset(2);
    cout<< b<<endl;
    b.flip();
    cout<<b<<endl;
    return 0;
}
