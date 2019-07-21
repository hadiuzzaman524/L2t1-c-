#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{

    long sec;
    time(&sec);         //read the present time.
    string tm=ctime(&sec); //convert the seconds to a string.
    cout<< "date and time:"<<tm<<endl;
    string hr(tm,11,2);     //substring of tm starting at position 11,2 character long.
    string greeting ("have a wonderful: ");
    if(hr<"10")
        greeting+="morning.";
    else if(hr< "17")
        greeting+="day.";
    else
        greeting+="evening.";
    cout<< greeting<<endl;
    return 0;
}
