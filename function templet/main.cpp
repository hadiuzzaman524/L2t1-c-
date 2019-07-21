#include <iostream>
using namespace std;
template <class jaman>
jaman add(jaman a,jaman b)
{
    return a+b;
}
int main()
{
    cout << add(10,20)<<endl;
    cout << add(10.2,20.1)<<endl;
    return 0;
}
