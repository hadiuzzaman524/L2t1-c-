
#include "Account.h"


int main()
{
    Account current1,current2;
    current1.init("cheers,mary",1234567,-1200.34);
    current1.display();
    current2=current1;
    current2.display();
    current2.init("jones,tom",3658955,199.256);
    current2.display();
    Account &mtr=current1;
    mtr.display();

    return 0;
}
