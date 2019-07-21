#include "date.h"
#include <iostream>
#include <ctime>
using namespace std;

void date::init(void)
{struct tm *ptr;
time_t sec;
time(&sec);
ptr=localtime(&sec);
month=(short) ptr->tm_mon+1;
day=(short) ptr->tm_mday;
year=(short) ptr->tm_year+1900;

}
void date::print(void)
{
    cout<< month<< '-'<<day<< '-'<<year<<endl;

}
