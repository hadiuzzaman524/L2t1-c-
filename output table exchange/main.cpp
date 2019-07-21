#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long euro,maxeuro;
   double rate;
   cout << "\n*** table of exchange euro....us-$***\n\n";
   cout << "\nplease give the rate of exchange: one euro in us-$:";
   cin>>rate;
   cout<<"\nplease enter the maximum euro:";
   cin>>maxeuro;

   cout<< fixed<<setprecision(2)<<endl;
   long lower,upper,step;
   for(lower=1,step=1; lower<=maxeuro; step*=10,lower=2*step)
        for(euro=lower,upper=step*10; euro<=upper&&euro<=maxeuro; euro+=step)
            cout<< setw(12)<<euro<<setw(20)<<euro*rate<<endl;
    return 0;
}
