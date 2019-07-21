#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    unsigned int i,seed;
    cout << "\nplease enter an integer between 0 and 65535:";
    cin>>seed;
    srand(seed);

    cout << "\n\n ****  random number  ****\n\n";

    for(i=1; i<=20; i++)
    {
        cout<< setw(20)<<i<< ".random number ="<<setw(3)<< (rand()%100+1)<<endl;
    }
    return 0;
}
