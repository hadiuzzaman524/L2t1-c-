#include <iostream>

using namespace std;
void changevalue(int &val)
{
    val=15;
}

int main()
{
    int i=10;
    cout<< "before calling change value() "<< i<<endl;
    changevalue(i);
    cout<< "after calling change value()"<< i<<endl;
    return 0;
}
