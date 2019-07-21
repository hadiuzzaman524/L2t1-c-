#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void circle(const double &red,double &um,double &fl);
const double startradious=0.5,endradious=10.0,step=0.5;
string header = "\n ***** computing circles *****\n",line(50,'-');


int main()
{
   double rad,circuit,plane;
   cout<<header<<endl;
   cout<<setw(10)<< "radius:"<<setw(20)<< "circumference:"<<setw(20)<< "area\n"<<line<<endl;
   cout<<fixed;
   for(rad=startradious; rad<endradious+step/2; rad +=step)
   {
       circle(rad,circuit,plane);
       cout<< setprecision(1)<<setw(8)<<rad<<setprecision(5)<<setw(22)<<circuit<<setw(20)<<plane<<endl;
   }
    return 0;
}
void circle(const double &red,double &um,double &fl)
{
    const double pi=3.1416;
    um=2*pi*red;
    fl=pi*red*red;
}
