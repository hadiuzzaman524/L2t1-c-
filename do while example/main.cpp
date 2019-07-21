#include <iostream>
using namespace std;

const long delay=10000000L;
int main()
{
   int tic;
   cout<< " \n how often should the tone be output?";
   cin>>tic;
   do
   {
       for(long i=0; i<delay; ++i);
      cout << "now the tone!\a"<<endl;

   }while(--tic>0);
   cout << "end of the acoustic interlude!\n"<<endl;
    return 0;
}
