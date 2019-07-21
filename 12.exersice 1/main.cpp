#include "date.h"
#include <iostream>
using namespace std;
int main()
{
    date today,birthday,adate;
    today.init();
    birthday.init(12,11,1997);
    cout<< "todays date:";
    today.print();
    cout<< "\n felix birthday:";
    birthday.print();
    cout<< ".................................\nsome testing outputs:"<<endl;
    adate=today;
    adate.print();
    date *pdate=&birthday;
    pdate->print();
    date &holiday=adate;
    holiday.init(1,5,2000);
    adate.print();
    return 0;
}
