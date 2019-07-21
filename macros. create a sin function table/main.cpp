#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.1416
#define START 0.0
#define END (2.0*PI)
#define STEP (PI/8.0)
#define HEADER (cout << "******  sine function table  ****** \n\n")

int main()
{
   HEADER;
   cout << setw(20)<< "x"<< setw(16) << "sin(x)\n............................................."<<fixed<<endl;
   double x;
   for(x=START; x<END+STEP/2; x+=STEP)
    cout<< setw(20)<<x<<setw(16)<<sin(x)<<endl;
   cout <<endl<<endl;
    return 0;
}
