#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> b;
    b.set();
    b.reset();
    cout<< b<<endl;
    return 0;
}
