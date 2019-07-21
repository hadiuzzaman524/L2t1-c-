#include <iostream>

using namespace std;

int main()
{
   float x,y;
   cout<< "type two different numbers:\n";
   if( !(cin>>x&&cin>>y))
   {
       cout<< "invalid input.";
   }
   else
   {
       cout<< "\n the greater value is:"<< (x>y?x:y)<<endl;
   }
    return 0;
}
