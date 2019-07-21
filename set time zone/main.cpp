#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    long sec;
    time(&sec);
    string ti=ctime(&sec);
    cout<< ti<<endl;
   string hr(ti,11,2);
    cout<<hr<<endl;
    return 0;
}
