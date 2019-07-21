#include <iostream>
#include<stdio.h>
using namespace std;


int main(){
    int hours,seconds,minutes;
    string merid;
    char delim;
    cin >> hours >> delim >> minutes >> delim >> seconds >> merid;

    if((merid=="PM"&&hours!=12)||(merid=="AM"&&hours==12))
        hours=(hours+12);

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
