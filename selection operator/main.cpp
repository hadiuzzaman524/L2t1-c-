#include <iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{   myfirstclass jaman;
    myfirstclass *p=&jaman;
    p->display();

    return 0;
}
