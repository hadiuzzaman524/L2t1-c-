#include <iostream>

using namespace std;

 int var ,*ptr;
int main()
{
    var=100;
    ptr=&var;
    cout<< "values of var:"<<var<< "address of var:"<<&var<<endl;
    cout<<"values of ptr:"<<ptr<<"address of ptr:"<<&ptr<<endl;
    return 0;
}
