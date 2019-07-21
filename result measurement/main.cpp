#include <iostream>
#include "result.h"
using namespace std;

int main()
{
    daytime morning(6,30);
    result t1,t2(12.5,morning),t3(18.2,12,0,0),t4(17.7);
    cout<< "default values:";
    t1.print();
    cout<< "\ntemperature time\n.................."<<endl;
    t2.print();
    t3.print();
    t4.print();
    cout<<endl;
    return 0;
}
