#include <iostream>
#include <bitset>
using namespace std;

int main()
{   bitset<4>b(string("0011"));
    b<<=2;
    cout<< b<<endl;
    b>>=2;
    cout<<b<<endl;

    return 0;
}
